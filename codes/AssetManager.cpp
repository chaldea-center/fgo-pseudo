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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x1
  struct AssetManager_StaticFields *static_fields; // x0
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
  int64_t v47; // x1
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
  void *v71; // x1
  struct AssetManager_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4C21011 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_2515/*"Azeri (Latin, Azerbaijan)"*/, v8);
    sub_1C3B764(&StringLiteral_2528/*"B053"*/, v9);
    sub_1C3B764(&StringLiteral_22665/*"run"*/, v10);
    sub_1C3B764(&StringLiteral_2527/*"B052"*/, v11);
    sub_1C3B764(&StringLiteral_2529/*"B054"*/, v12);
    sub_1C3B764(&StringLiteral_1/*""*/, v13);
    sub_1C3B764(&StringLiteral_22735/*"seStop"*/, v14);
    byte_4C21011 = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2515/*"Azeri (Latin, Azerbaijan)"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)AssetManager_TypeInfo->static_fields,
    StringLiteral_2515/*"Azeri (Latin, Azerbaijan)"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = StringLiteral_22665/*"run"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22665/*"run"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->SAVE_DATA_OFFLINE, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_22735/*"seStop"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22735/*"seStop"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v24->SAVE_DATA_ONLINE, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_2527/*"B052"*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->configFileName = (struct System_String_o *)StringLiteral_2527/*"B052"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v32->configFileName, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_2529/*"B054"*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->createConfigFileName = (struct System_String_o *)StringLiteral_2529/*"B054"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v40->createConfigFileName, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_2528/*"B053"*/;
  v48 = AssetManager_TypeInfo->static_fields;
  v48->backConfigFileName = (struct System_String_o *)StringLiteral_2528/*"B053"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v48->backConfigFileName, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_1/*""*/;
  v56 = AssetManager_TypeInfo->static_fields;
  v56->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v56->assetBundleMasterVersion, (int64_t)v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_1/*""*/;
  v64 = AssetManager_TypeInfo->static_fields;
  v64->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v64->assetBundleDateVersion, (int64_t)v63, v65, v66, v67, v68, v69, v70);
  v71 = StringLiteral_1/*""*/;
  v72 = AssetManager_TypeInfo->static_fields;
  v72->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v72->assetBundleBuildVersion, (int64_t)v71, v73, v74, v75, v76, v77, v78);
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
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_Queue_T__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4C21010 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v4);
    sub_1C3B764(&System_Collections_Generic_List_AssetLoader__TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v8);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C21010 = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.assetBundleDic, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v17;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.assetBundleReleaseDic,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v24;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.assetResourceDic, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.requestWriteCounter = -1.0;
  v38 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v38;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.processingAssetLoaderList,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.loadParallelMax = 1;
  v45 = (System_Collections_Generic_Queue_T__o *)sub_1C3B9B0(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v45,
    (const MethodInfo_37FD88C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v45;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.downLoadWaitList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38C8B4C *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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

  if ( (byte_4C20FFA & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4C20FFA = 1;
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
                                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39186908(syncRoot, type, name, v16) )
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
    sub_1C3B9C0(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_37FDF0C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_34207D0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v29,
                (const MethodInfo_34208C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v24 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C3B9C0(0LL, v22);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39186908(klass, type, name, v23) )
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
    (const MethodInfo_34207C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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
  _BOOL8 IsSame_39186908; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct AssetData_o *v29; // x8
  int32_t v30; // w9
  int v31; // w19
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C20FF9 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4C20FF9 = 1;
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
                                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)AssetData__IsSame_39186908(
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
        sub_1C3B9C0(processingAssetLoaderList, *(_QWORD *)&type);
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
    (const MethodInfo_37FDF0C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34207D0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
    {
      v31 = 8;
      goto LABEL_22;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v36,
                (const MethodInfo_34208C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v24 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C3B9C0(0LL, v22);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      IsSame_39186908 = AssetData__IsSame_39186908(klass, type, name, v23);
      if ( IsSame_39186908 )
        break;
    }
  }
  v29 = v24->fields.data;
  if ( !v29 )
    sub_1C3B9C0(IsSame_39186908, v27);
  v30 = v29->fields.entryCount;
  if ( (v30 & 0x80000000) == 0 )
    v29->fields.entryCount = v30 + 1;
  AssetManager_LoadWaitStatus__AddCallback(v24, callbackFunc, v28);
  v31 = 7;
LABEL_22:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34207C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v20 && v31 == 7;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4C20FFC & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5);
    byte_4C20FFC = 1;
  }
  v6 = sub_1C3B9B0(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 24) = callbackFunc;
  sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)callbackFunc, v7, v8, v9, v10, v11, v12);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1C3B9C0(0LL, v13);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v6,
    (const MethodInfo_37FDE54 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39225464(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v4 = this;
  if ( (byte_4C20FFD & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1C3B764(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v5);
    byte_4C20FFD = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v6 = sub_1C3B9B0(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v6, 0LL),
        *(_QWORD *)(v6 + 16) = info,
        sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)info, v7, v8, v9, v10, v11, v12),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0LL) )
  {
    sub_1C3B9C0(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v6,
    (const MethodInfo_37FDE54 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39235828(
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
  if ( (byte_4C20FFE & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1C3B764(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9);
    byte_4C20FFE = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_1C3B9B0(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_39236000(v10, info, callbackFunc, resourceNames, v11),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1C3B9C0(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v10,
    (const MethodInfo_37FDE54 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
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

  if ( (byte_4C2100D & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__AssetObjectListSetupAndCall_d__184_TypeInfo, action);
    byte_4C2100D = 1;
  }
  v5 = sub_1C3B9B0(AssetManager__AssetObjectListSetupAndCall_d__184_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)asset, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall_39237512(
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

  if ( (byte_4C2100E & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__AssetObjectListSetupAndCall_d__185_TypeInfo, action);
    byte_4C2100E = 1;
  }
  v5 = sub_1C3B9B0(AssetManager__AssetObjectListSetupAndCall_d__185_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)assetList, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Queue_T__o *v7; // x20
  System_Collections_Generic_Queue_T__o *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4C20FF1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v5);
    sub_1C3B764(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v6);
    byte_4C20FF1 = 1;
  }
  v7 = (System_Collections_Generic_Queue_T__o *)sub_1C3B9B0(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v7,
    (const MethodInfo_37FD88C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1C3B9C0(downLoadWaitList, v8);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_37FDFE4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
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
        (const MethodInfo_37FDE54 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.downLoadWaitList, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4C20FF2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_4C20FF2 = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_37FDB14 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4C20FBE & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    byte_4C20FBE = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1C3B9C0(0LL, method);
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

  if ( (byte_4C20FFB & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v11);
    byte_4C20FFB = 1;
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
                                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39186908(syncRoot, type, name, v14) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v13;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1C3B9C0(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_37FDF0C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_34207D0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v16 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v23,
                (const MethodInfo_34208C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1C3B9C0(0LL, v18);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39186908(klass, type, name, v19) )
    {
      v21 = 7;
      goto LABEL_19;
    }
  }
  v21 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_34207C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v16 && v21 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4C20FBD & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, dateVersion);
    byte_4C20FBD = 1;
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

  if ( (byte_4C2100F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_1C3B764(&StringLiteral_12756/*"Stop"*/, v7);
    byte_4C2100F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1C3B9C0(assetBundleDic, v8);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v18,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v19,
              (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v10 )
        break;
      currentValue = (AssetData_o *)v19.fields._currentValue;
      if ( !v19.fields._currentValue )
        sub_1C3B9C0(v10, v11);
      klass = v19.fields._currentValue[2].klass;
      if ( !klass )
        sub_1C3B9C0(0LL, v11);
      if ( !System_String__Equals_63376992((System_String_o *)klass, (System_String_o *)StringLiteral_12756/*"Stop"*/, 5, 0LL) )
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
      (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v40; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v41; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4C20FF5 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, isFast);
    sub_1C3B764(&CatAndMouseGame_TypeInfo, v5);
    sub_1C3B764(&Crc32_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v14);
    sub_1C3B764(&StringLiteral_25675, v15);
    byte_4C20FF5 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  lockTaken = 0;
  v41 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v18 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62523116(v18, 60 * Count, 0LL);
  if ( !v18 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_62532092(v18, 0x40u, 0LL);
  v19 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v19 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_62529764(v18, v19->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_62532092(v18, 0x2Cu, 0LL);
    v20 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v20 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_62529764(v18, v20->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_62532092(v18, 0x2Cu, 0LL);
      v21 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v21 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_62529764(v18, v21->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_62532092(v18, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1C3B9C0(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v39,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v40,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v40.fields._currentValue;
    if ( !v40.fields._currentValue )
      sub_1C3B9C0(v22, v23);
    System_Text_StringBuilder__Append_62532260(v18, (int32_t)v40.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_62532092(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62529764(v18, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_62532092(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62532260(v18, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_62532092(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62532436(v18, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_62532092(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62529764(v18, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_62529764(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v40,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_64595044(requestConfigWriteData, &lockTaken, 0LL);
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                             v18,
                             v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1C3B9C0(0LL, v28);
  v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               v26,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v41 = Crc32__Compute(v29, 0LL);
  v30 = System_UInt32__ToString((uint32_t)&v41, 0LL);
  v31 = System_String__Concat_63381876(
          (System_String_o *)StringLiteral_25675,
          v30,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v26,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v32 = CatAndMouseGame__CatGame8(v31, 0LL);
  this->fields.requestConfigWriteData = v32;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.writeRequestThread, 0LL, v4, v5, v6, v7, v8, v9);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *v19; // x19
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
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20FEB & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, method);
    sub_1C3B764(&StringLiteral_8339/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v4);
    sub_1C3B764(&StringLiteral_25623, v5);
    sub_1C3B764(&StringLiteral_9396/*"ONE_COMMAND_SPELL"*/, v6);
    sub_1C3B764(&StringLiteral_13563/*"The Writer is closed or in error state."*/, v7);
    sub_1C3B764(&StringLiteral_2657/*"B560"*/, v8);
    sub_1C3B764(&StringLiteral_8782/*"MemberInfo cannot be obtained for ISerialized Object '{0}'."*/, v9);
    sub_1C3B764(&StringLiteral_7051/*"HIDE_END"*/, v10);
    byte_4C20FEB = 1;
  }
  v11 = (System_String_o *)sub_1C3B80C(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1C3B9C0(0LL, v12);
  v19 = v11;
  if ( !LODWORD(v11[1].klass) )
    goto LABEL_14;
  v20 = StringLiteral_2657/*"B560"*/;
  v11[1].monitor = (void *)StringLiteral_2657/*"B560"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v11[1].monitor, v20, v13, v14, v15, v16, v17, v18);
  if ( LODWORD(v19[1].klass) <= 1 )
    goto LABEL_14;
  v27 = StringLiteral_8339/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/;
  v19[1].fields = (System_String_Fields)StringLiteral_8339/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v19[1].fields, v27, v21, v22, v23, v24, v25, v26);
  if ( LODWORD(v19[1].klass) <= 2 )
    goto LABEL_14;
  v34 = StringLiteral_8782/*"MemberInfo cannot be obtained for ISerialized Object '{0}'."*/;
  v19[2].klass = (System_String_c *)StringLiteral_8782/*"MemberInfo cannot be obtained for ISerialized Object '{0}'."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v19[2], v34, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v19[1].klass) <= 3 )
    goto LABEL_14;
  v41 = StringLiteral_7051/*"HIDE_END"*/;
  v19[2].monitor = (void *)StringLiteral_7051/*"HIDE_END"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v19[2].monitor, v41, v35, v36, v37, v38, v39, v40);
  if ( LODWORD(v19[1].klass) <= 4 )
    goto LABEL_14;
  v48 = StringLiteral_13563/*"The Writer is closed or in error state."*/;
  v19[2].fields = (System_String_Fields)StringLiteral_13563/*"The Writer is closed or in error state."*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v19[2].fields, v48, v42, v43, v44, v45, v46, v47);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v11 = System_Double__ToString_64079016(1000.0, &format, (const MethodInfo *)StringLiteral_9396/*"ONE_COMMAND_SPELL"*/);
  if ( i >= LODWORD(v19[1].klass) )
LABEL_14:
    sub_1C3B9C8(v11, v12);
  return System_String__Format_63382984(
           (System_String_o *)StringLiteral_25623,
           (Il2CppObject *)v11,
           *((Il2CppObject **)&v19[1].monitor + i),
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

  if ( (byte_4C20FE5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_4C20FE5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v19,
    downLoadWaitList,
    (const MethodInfo_37FDF0C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v21 = v19;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
            (const MethodInfo_34207D0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
            (const MethodInfo_34208C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1C3B9C0(0LL, v13);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
    (const MethodInfo_34207C0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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
                                                                (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields._currentValue )
      sub_1C3B9C0(v17, v18);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_1C3B9C0(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4C21001 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__DelayLoadStart_d__149_TypeInfo, method);
    byte_4C21001 = 1;
  }
  v3 = sub_1C3B9B0(AssetManager__DelayLoadStart_d__149_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4C20FB6 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    byte_4C20FB6 = 1;
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
        AssetManager__AddLoadWaitStatus_39235828(this, AssetData, callbackFunc, 0LL, v12);
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

  if ( (byte_4C20FEC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_4C20FEC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1C3B9C0(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v19,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v19.fields._currentValue;
    if ( !v19.fields._currentValue )
      sub_1C3B9C0(v12, v13);
    monitor = (int)v19.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v19.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v19.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_39225464(this, currentValue, v17);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_39225464(this, (AssetData_o *)v19.fields._currentValue, v14);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4C20FEA & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo, attrib);
    byte_4C20FEA = 1;
  }
  v7 = sub_1C3B9B0(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)attrib, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_39228404(
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
  if ( (byte_4C20FED & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_1C3B764(&StringLiteral_847/*", numDetail:"*/, v11);
    byte_4C20FED = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !attribList )
LABEL_33:
    sub_1C3B9C0(this, attribList);
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
        this = (AssetManager_o *)System_String__Concat_63379872(
                                   v13,
                                   (System_String_o *)StringLiteral_847/*", numDetail:"*/,
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
    sub_1C3B9C8(this, attribList);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v31 = v30;
LABEL_17:
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v31,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    currentValue = (AssetData_o *)v31.fields._currentValue;
    if ( !v31.fields._currentValue )
      sub_1C3B9C0(v17, v18);
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
            sub_1C3B9C8(v25, v26);
        }
        AssetManager__AddLoadWaitStatus_39225464(v6, currentValue, v27);
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_39225464(v6, (AssetData_o *)v31.fields._currentValue, v19);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v31,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v29);
}


bool __fastcall AssetManager__DownloadAssetStorage_39217752(
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
    sub_1C3B9C0(this, 0LL);
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
        sub_1C3B9C8(this, nameList);
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

  if ( (byte_4C21008 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C3B764(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic);
    byte_4C21008 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1C3B9C0(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C20FEF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v13);
    byte_4C20FEF = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v14 = System_String__Concat_63368612(path, (System_String_o *)StringLiteral_1102/*"/[delegate]"*/, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v36,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v37,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    currentValue = v37.fields._currentValue;
    if ( !v37.fields._currentValue )
      sub_1C3B9C0(v18, v19);
    monitor = (System_String_o *)v37.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1C3B9C0(0LL, v19);
    v22 = System_String__StartsWith(monitor, v14, 0LL);
    if ( v22 )
    {
      if ( !v15 )
        sub_1C3B9C0(v22, v23);
      v30 = (Il2CppObject *)currentValue[1].monitor;
      items = v15->fields._items;
      v32 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1C3B9C0(v22, v30);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v30,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v37,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v15 )
LABEL_21:
    sub_1C3B9C0(assetBundleDic, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_39221292(
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
  if ( (byte_4C21009 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C3B764(&AssetData___TypeInfo, nameList);
    byte_4C21009 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1C3B9C0(this, nameList);
  this = (AssetManager_o *)sub_1C3B80C(AssetData___TypeInfo, nameList->max_length);
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
            this = (AssetManager_o *)sub_1C3B8A0(this, v7->obj.klass->_1.element_class);
            if ( !this )
            {
              v19 = sub_1C3B9E4(0LL);
              sub_1C3B88C(v19, 0LL);
            }
            if ( v8 >= v7->max_length )
              break;
            p_isUseDebugStatus->klass = (PartyOrganizationUtility_c *)v11;
            sub_1C3B708(p_isUseDebugStatus, (int64_t)v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      LODWORD(v6) = nameList->max_length;
      ++v8;
      p_isUseDebugStatus = (PartyOrganizationUtility_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
    sub_1C3B9C8(this, nameList);
  }
  return v7;
}


bool __fastcall AssetManager__GetAssetStorage_39221748(
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


bool __fastcall AssetManager__GetAsset_39212016(
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


bool __fastcall AssetManager__GetAsset_39212304(
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


AssetData_o *__fastcall AssetManager__GetAsset_39236896(
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

  if ( (byte_4C20FC0 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    byte_4C20FC0 = 1;
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

  if ( (byte_4C20FEE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_4C20FEE = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1C3B9C0(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v6 = 0;
  while ( v6 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v6,
                                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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

  if ( (byte_4C20FBF & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    byte_4C20FBF = 1;
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C20FF3 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__InitCR_d__131_TypeInfo, method);
    byte_4C20FF3 = 1;
  }
  v3 = sub_1C3B9B0(AssetManager__InitCR_d__131_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  void *assetBundleReleaseDic; // x0
  char v24; // w28
  const MethodInfo *v25; // x1
  int v26; // w28
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int32_t v29; // w20
  Il2CppObject *Item; // x21
  int32_t v31; // w2
  int v32; // w8
  System_String_o *Path; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  AssetManager_c *v40; // x8
  int64_t v41; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v43; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct AssetManager_StaticFields *v48; // x8
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct AssetManager_StaticFields *v55; // x8
  System_String_o *v56; // x20
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  struct AssetManager_StaticFields *v59; // x8
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct AssetManager_StaticFields *v66; // x8
  System_String_o *v67; // x20
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  struct AssetManager_StaticFields *v70; // x8
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v77; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C20FE7 & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_4C20FE7 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.initCRW, 0LL, v17, v18, v19, v20, v21, v22);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v26 = 0;
  }
  else
  {
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v77,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v24 = 0;
    for ( i = v77;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v24 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v25) )
    {
      if ( !i.fields._currentValue )
        sub_1C3B9C0(0LL, v25);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v26 = v24 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v77,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v77;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v26 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v28) )
    {
      if ( !i.fields._currentValue )
        sub_1C3B9C0(0LL, v28);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v26 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v27);
  assetBundleReleaseDic = this->fields.processingAssetLoaderList;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( *((int *)assetBundleReleaseDic + 6) >= 1 )
  {
    v29 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)assetBundleReleaseDic,
               v29,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)Item, 0LL);
      assetBundleReleaseDic = this->fields.processingAssetLoaderList;
      if ( !assetBundleReleaseDic )
        goto LABEL_44;
      v31 = *((_DWORD *)assetBundleReleaseDic + 6);
      ++v29;
    }
    while ( v29 < v31 );
    v32 = *((_DWORD *)assetBundleReleaseDic + 7) + 1;
    *((_DWORD *)assetBundleReleaseDic + 6) = 0;
    *((_DWORD *)assetBundleReleaseDic + 7) = v32;
    if ( v31 >= 1 )
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v31, 0LL);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_44:
    sub_1C3B9C0(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_37FDB14 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0LL;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(0LL);
  v40 = AssetManager_TypeInfo;
  v41 = (int64_t)Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v40 = AssetManager_TypeInfo;
  }
  static_fields = v40->static_fields;
  static_fields->cachePathName = (struct System_String_o *)v41;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->cachePathName, v41, v34, v35, v36, v37, v38, v39);
  v43 = AssetManager_TypeInfo->static_fields;
  cachePathName = v43->cachePathName;
  configFileName = v43->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v46 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v47 = System_String__Concat_63368612(cachePathName, v46, 0LL);
  v48 = AssetManager_TypeInfo->static_fields;
  v48->cacheListFileName = v47;
  sub_1C3B708((PartyOrganizationUtility_o *)&v48->cacheListFileName, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  v55 = AssetManager_TypeInfo->static_fields;
  v56 = v55->cachePathName;
  v57 = AndroidUtil__ConvertFileNameIfNeed(v55->createConfigFileName, 0LL);
  v58 = System_String__Concat_63368612(v56, v57, 0LL);
  v59 = AssetManager_TypeInfo->static_fields;
  v59->createCacheListFileName = v58;
  sub_1C3B708((PartyOrganizationUtility_o *)&v59->createCacheListFileName, (int64_t)v58, v60, v61, v62, v63, v64, v65);
  v66 = AssetManager_TypeInfo->static_fields;
  v67 = v66->cachePathName;
  v68 = AndroidUtil__ConvertFileNameIfNeed(v66->backConfigFileName, 0LL);
  v69 = System_String__Concat_63368612(v67, v68, 0LL);
  v70 = AssetManager_TypeInfo->static_fields;
  v70->backCacheListFileName = v69;
  sub_1C3B708((PartyOrganizationUtility_o *)&v70->backCacheListFileName, (int64_t)v69, v71, v72, v73, v74, v75, v76);
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
    sub_1C3B708((PartyOrganizationUtility_o *)p_initCRW, (int64_t)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
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

  if ( (byte_4C21004 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_4C21004 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1C3B9C0(0LL, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_39214196(
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
    sub_1C3B9C0(this, 0LL);
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
        sub_1C3B9C8(this, nameList);
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


bool __fastcall AssetManager__IsNeedDownload_39214744(
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
    sub_1C3B9C0(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1C3B9C8(this, nameList);
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
  void *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x0
  System_IO_IOException_o *v51; // x20
  System_String_o *v52; // x0
  __int64 v53; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v54; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4C20FF8 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_1C3B764(&CommonServicePluginScript_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&ManagementManager_TypeInfo, v12);
    sub_1C3B764(&ManagerConfig_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C3B764(&System_IO_StreamWriter_TypeInfo, v15);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1C3B764(&StringLiteral_2150/*"Add:"*/, v17);
    sub_1C3B764(&StringLiteral_16254/*"_txt_servant"*/, v18);
    sub_1C3B764(&StringLiteral_11691/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v19);
    sub_1C3B764(&StringLiteral_2151/*"AddArtsCardIds"*/, v20);
    sub_1C3B764(&StringLiteral_1/*""*/, v21);
    byte_4C20FF8 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v54,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v23 = 0;
  v55 = v54;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v55,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    if ( !v55.fields._currentValue )
      sub_1C3B9C0(v24, v25);
    if ( !HIDWORD(v55.fields._currentValue[5].klass) )
    {
      if ( v55.fields._currentValue[4].monitor )
        v23 |= AssetData__ReleaseData((AssetData_o *)v55.fields._currentValue, v25);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v55,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v23 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v26);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1C3B9C0(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
          v50 = sub_1C3B778(&System_IO_IOException_TypeInfo);
          v51 = (System_IO_IOException_o *)sub_1C3B9B0(v50);
          v52 = (System_String_o *)sub_1C3B778(&StringLiteral_5428/*"EVENT_AREA_IMPROVE_REWARD_UNIT_TIME"*/);
          System_IO_IOException___ctor_63508856(v51, v52, 0LL);
          v53 = sub_1C3B778(&Method_AssetManager_LateUpdate__);
          sub_1C3B88C(v51, v53);
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
      v36 = (System_IO_StreamWriter_o *)sub_1C3B9B0(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_63537748(v36, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v36 )
        sub_1C3B9C0(v37, v38);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v36->klass->vtable._16_Write.method)(
        v36,
        this->fields.requestConfigWriteData,
        v36->klass->vtable._17_Write.methodPtr);
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
      v43 = StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
        (int64_t)v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
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
  if ( (byte_4C2100A & 1) == 0 )
  {
    sub_1C3B764(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_4C2100A = 1;
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
    v9 = (AssetData_o *)sub_1C3B9B0(AssetData_TypeInfo);
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
      sub_1C3B9C0(assetResourceDic, v12);
    System_Collections_Generic_Dictionary_object__object___Add(
      assetResourceDic,
      (Il2CppObject *)name,
      (Il2CppObject *)v9,
      (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
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
  if ( (byte_4C21005 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C3B764(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4C21005 = 1;
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
    sub_1C3B9C0(0LL, v10);
  System_Collections_Generic_Dictionary_object__object___Remove(
    assetBundleReleaseDic,
    (Il2CppObject *)name,
    (const MethodInfo_3356C64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
      AssetManager__AddLoadWaitStatus_39235828(v8, v20, callbackFunc, 0LL, v19);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v22);
    }
  }
LABEL_19:
  LOBYTE(v17) = 1;
  return (char)v17;
}


bool __fastcall AssetManager__LoadAssetStorage_39219944(
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_List_object__o *v33; // x23
  System_Collections_Generic_List_object__o **v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  __int64 v43; // x8
  int v44; // w26
  unsigned __int64 v45; // x27
  AssetLoader_LoadEndDataHandler_o **v46; // x23
  bool v47; // w25
  System_String_o *v48; // x24
  AssetLoader_LoadEndDataHandler_o *v49; // x25
  const MethodInfo *v50; // x3
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  const MethodInfo *v57; // x1

  if ( (byte_4C21007 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1C3B764(&Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__, v16);
    sub_1C3B764(&AssetManager___c__DisplayClass169_0_TypeInfo, v17);
    byte_4C21007 = 1;
  }
  v18 = sub_1C3B9B0(AssetManager___c__DisplayClass169_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 40), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 48), (int64_t)callbackFunc, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v18 + 24) = v33;
  v34 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)v33, v35, v36, v37, v38, v39, v40);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v18 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1C3B9C0(AssetStorage, v20);
  }
  v43 = *(_QWORD *)&nameList->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0;
    v45 = 0LL;
    v46 = (AssetLoader_LoadEndDataHandler_o **)(v18 + 64);
    v47 = 1;
    while ( 1 )
    {
      if ( v45 >= (unsigned int)v43 )
        sub_1C3B9C8(AssetStorage, v20);
      v48 = nameList->m_Items[v45];
      if ( !v48 )
      {
        AssetStorage = *v34;
        if ( !*v34 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v47 )
        goto LABEL_22;
      v49 = *v46;
      if ( !*v46 )
      {
        v49 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v49,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__,
          v50);
        *(_QWORD *)(v18 + 64) = v49;
        sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 64), (int64_t)v49, v51, v52, v53, v54, v55, v56);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v48,
                                                                    v49,
                                                                    *(_DWORD *)(v18 + 56),
                                                                    v42);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v44;
      v47 = 1;
LABEL_23:
      LODWORD(v43) = nameList->max_length;
      if ( (__int64)++v45 >= (int)v43 )
        goto LABEL_26;
    }
    AssetStorage = *v34;
    if ( !*v34 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v48,
                                                                  (const MethodInfo_368C90C *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v20 = (unsigned int)AssetStorage;
      AssetStorage = *v34;
      if ( !*v34 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v20,
        AssetStorage->fields._size - v20,
        (const MethodInfo_368D4D8 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v47 = 0;
    goto LABEL_23;
  }
  v44 = 0;
  v47 = 1;
LABEL_26:
  if ( v44 < 1 || !*(_BYTE *)(v18 + 32) && *(_DWORD *)(v18 + 16) == v44 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v18 + 48), v41);
    this->fields.loadParallelMax = *(_DWORD *)(v18 + 56);
    *(_BYTE *)(v18 + 32) = 1;
    AssetManager__LoadStart(this, v57);
  }
  return v47;
}


bool __fastcall AssetManager__LoadAsset_39236652(
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

  if ( (byte_4C20FE6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4C20FE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1C3B9C0(Instance, v4);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v35; // x8
  unsigned __int64 v36; // x27
  int max_length; // w8
  Il2CppObject *v38; // x25
  __int64 v39; // x23
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w9
  int v45; // w8
  System_String_array *v46; // x0
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x1
  AssetData_o *v50; // [xsp+8h] [xbp-68h]

  if ( (byte_4C21006 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_4C21006 = 1;
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
          (const MethodInfo_3356C64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
        v27 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v26->fields.objectList;
        if ( objectList )
        {
          v35 = *(_QWORD *)&resourceNames->max_length;
          v50 = v26;
          if ( (int)v35 >= 1 )
          {
            v36 = 0LL;
            while ( 1 )
            {
              if ( v36 >= (unsigned int)v35 )
                goto LABEL_46;
              max_length = objectList->max_length;
              v38 = (Il2CppObject *)resourceNames->m_Items[v36];
              if ( max_length >= 1 )
                break;
LABEL_26:
              if ( !v27 )
                goto LABEL_45;
              items = v27->fields._items;
              v41 = Method_System_Collections_Generic_List_string__Add__;
              ++v27->fields._version;
              if ( !items )
                goto LABEL_45;
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  v38,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v43 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v43[4] = (Il2CppClass *)v38;
                sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v38, v28, v29, v30, v31, v32, v33);
              }
LABEL_31:
              LODWORD(v35) = resourceNames->max_length;
              if ( (__int64)++v36 >= (int)v35 )
                goto LABEL_32;
            }
            v39 = 0LL;
            while ( (unsigned int)v39 < max_length )
            {
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v39];
              if ( !assetBundleReleaseDic )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                                   (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( !v38 )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_63376928(
                                                                                                   (System_String_o *)v38,
                                                                                                   (System_String_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
                goto LABEL_31;
              max_length = objectList->max_length;
              if ( (int)++v39 >= max_length )
                goto LABEL_26;
            }
LABEL_46:
            sub_1C3B9C8(assetBundleReleaseDic, v19);
          }
LABEL_32:
          v26 = v50;
          if ( !v27 )
LABEL_45:
            sub_1C3B9C0(assetBundleReleaseDic, v19);
        }
        else
        {
          if ( !v27 )
            goto LABEL_45;
          System_Collections_Generic_List_object___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v44 = v26->fields.entryCount;
        v45 = v27->fields._size;
        if ( (v44 & 0x80000000) == 0 )
          v26->fields.entryCount = v44 + 1;
        if ( v45 < 1 )
        {
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v26,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v46 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v27,
                                         (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_39235828(this, v26, callbackFunc, v46, v47);
          this->fields.loadParallelMax = loadParallelMax;
          AssetManager__LoadStart(this, v48);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v28; // x8
  Il2CppObject *v29; // x0
  __int64 v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x22
  __int64 v38; // x8
  System_String_o **v39; // x8
  __int64 v40; // x8
  Il2CppObject *v41; // x0
  Il2CppObject **v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  const MethodInfo *v66; // x2
  AssetLoader_LoadEndDataHandler_o *v67; // x1
  __int64 v68; // x19
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C21000 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v12);
    sub_1C3B764(&Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__, v13);
    sub_1C3B764(&AssetManager___c__DisplayClass148_0_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_5360/*"END_LOAD"*/, v15);
    byte_4C21000 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v16 = sub_1C3B9B0(AssetManager___c__DisplayClass148_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_49;
  *(_QWORD *)(v16 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1D530 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v18);
    byte_4C1D530 = 1;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v69,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v70 = v69;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v70,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_49;
  if ( downLoadWaitList->fields._size <= 0 )
    return 0;
  v28 = this->fields.processingAssetLoaderList;
  if ( !v28 )
    goto LABEL_49;
  if ( v28->fields._size >= this->fields.loadParallelMax )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5360/*"END_LOAD"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v29 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_37FDFE4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v16 + 24) = v29,
        v30 = v16 + 24,
        sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)v29, v31, v32, v33, v34, v35, v36),
        (v37 = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_49:
    sub_1C3B9C0(processingAssetLoaderList, v18);
  }
  if ( (byte_4C21014 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, v18);
    byte_4C21014 = 1;
  }
  v38 = *(_QWORD *)(v37 + 16);
  if ( v38 )
    v39 = (System_String_o **)(v38 + 24);
  else
    v39 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v39, 0LL);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( processingAssetLoaderList )
    {
      v41 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v16 + 32) = v41;
      v42 = (Il2CppObject **)(v16 + 32);
      sub_1C3B708((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)v41, v43, v44, v45, v46, v47, v48);
      processingAssetLoaderList = this->fields.processingAssetLoaderList;
      if ( processingAssetLoaderList )
      {
        v18 = *v42;
        v55 = *((_QWORD *)processingAssetLoaderList + 2);
        v56 = Method_System_Collections_Generic_List_AssetLoader__Add__;
        ++*((_DWORD *)processingAssetLoaderList + 7);
        if ( v55 )
        {
          v57 = *((int *)processingAssetLoaderList + 6);
          if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
              v18,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = v55 + 8 * v57;
            *((_DWORD *)processingAssetLoaderList + 6) = v57 + 1;
            *(_QWORD *)(v58 + 32) = v18;
            sub_1C3B708((PartyOrganizationUtility_o *)(v58 + 32), (int64_t)v18, v49, v50, v51, v52, v53, v54);
          }
          if ( *(_QWORD *)v30 )
          {
            processingAssetLoaderList = *v42;
            if ( *v42 )
            {
              v65 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v65;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)((char *)processingAssetLoaderList + 32),
                v65,
                v59,
                v60,
                v61,
                v62,
                v63,
                v64);
              if ( *(_QWORD *)v30 )
              {
                processingAssetLoaderList = *v42;
                if ( *v42 )
                {
                  v67 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v30 + 32LL);
                  if ( v67 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v67, v66);
                  v68 = sub_1C3B9B0(System_Action_TypeInfo);
                  System_Action___ctor(
                    (System_Action_o *)v68,
                    (Il2CppObject *)v16,
                    Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__,
                    0LL);
                  if ( v68 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v68 + 24))(*(_QWORD *)(v68 + 64), *(_QWORD *)(v68 + 40));
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
  if ( !*(_QWORD *)v30 )
    goto LABEL_49;
  v40 = *(_QWORD *)(*(_QWORD *)v30 + 24LL);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v40 + 24))(*(_QWORD *)(v40 + 64), *(_QWORD *)(v40 + 40));
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

  if ( (byte_4C20FF4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1C3B764(&ManagementManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4C20FF4 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4C2101D )
    {
      sub_1C3B764(&ManagementManager_TypeInfo, isDecide);
      byte_4C2101D = 1;
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
      UnityEngine_Application__Quit_70916020(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1C3B9C0(0LL, v9);
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
  if ( (byte_4C21002 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    this = (AssetManager_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C21002 = 1;
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
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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
    sub_1C3B9C0(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v9,
    (const MethodInfo_368D440 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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

  if ( (byte_4C21003 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_4C21003 = 1;
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
        sub_1C3B9C0(0LL, v11);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_3356C64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_4C2100B & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C3B764(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4C2100B = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1C3B9C0(0LL, v8);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_3356C64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_39222256(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1C3B9C0(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1C3B9C8(this, nameList);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_39212988(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1C3B9C0(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1C3B9C8(this, *(_QWORD *)&type);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_39213288(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_39213488(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1C3B9C0(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1C3B9C8(this, assetInfoList);
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
  if ( (byte_4C20FFF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    this = (AssetManager_o *)sub_1C3B764(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5);
    byte_4C20FFF = 1;
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
            (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_1C3B9C0(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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

  if ( (byte_4C20FF0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v9);
    byte_4C20FF0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_63368612(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1102/*"/[delegate]"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v13 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1C3B9C0(Values, v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v14 )
      break;
    currentValue = v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1C3B9C0(v14, v15);
    monitor = (System_String_o *)v18.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1C3B9C0(0LL, v15);
    if ( System_String__StartsWith(monitor, v13, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4C20FB4 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    sub_1C3B764(&ManagerConfig_TypeInfo, v2);
    byte_4C20FB4 = 1;
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

  if ( (byte_4C20FB5 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    sub_1C3B764(&ManagerConfig_TypeInfo, v2);
    byte_4C20FB5 = 1;
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

  if ( (byte_4C20FE8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_4C20FE8 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1C3B9C0(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v11,
           (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._currentValue )
      sub_1C3B9C0(v8, v9);
    if ( LODWORD(v11.fields._currentValue[2].monitor) != HIDWORD(v11.fields._currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_39225464(this, (AssetData_o *)v11.fields._currentValue, v10);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1

  if ( (byte_4C20FF6 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_1C3B764(&System_Threading_ThreadStart_TypeInfo, v3);
    sub_1C3B764(&System_Threading_Thread_TypeInfo, v4);
    byte_4C20FF6 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v5 = (System_Threading_ThreadStart_o *)sub_1C3B9B0(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v5, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v6 = (System_Threading_Thread_o *)sub_1C3B9B0(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v6, v5, 0LL);
  this->fields.writeRequestThread = v6;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1C3B708((PartyOrganizationUtility_o *)p_writeRequestThread, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  if ( !*p_writeRequestThread )
    sub_1C3B9C0(0LL, v14);
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
        const MethodInfo_2FD206C *method)
{
  __int64 v8; // x1
  AssetData_o *AssetStorage; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *Object_object__50142412; // x1
  Il2CppObject *v17; // x19

  if ( !method->rgctx_data )
  {
    sub_1C3B764(&AssetManager_TypeInfo, path);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1C8D69C(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                AssetStorage,
                                name,
                                (const MethodInfo_2FD1CCC *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__50142412 = 0LL;
  *data = Object_object__50142412;
  sub_1C3B708((PartyOrganizationUtility_o *)data, (int64_t)Object_object__50142412, v10, v11, v12, v13, v14, v15);
  v17 = *data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__50142412; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *v26; // x19

  if ( (byte_4C2100C & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, name);
    sub_1C3B764(&AssetManager_TypeInfo, v11);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    byte_4C2100C = 1;
  }
  *atlas = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)atlas, 0LL, (int64_t)atlasName, (int32_t)method, v4, v5, v6, v7);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v14);
  if ( AssetStorage )
    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  else
    Object_object__50142412 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL);
  if ( v17 )
  {
    if ( !Object_object__50142412 )
      sub_1C3B9C0(v17, v18);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__50142412,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1C3B708((PartyOrganizationUtility_o *)atlas, (int64_t)Component_object, v20, v21, v22, v23, v24, v25);
  }
  v26 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
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

  if ( (byte_4C20FB2 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_4C20FB2 = 1;
  }
  v3 = sub_1C3B9B0(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4C21012 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1C3B764(&SoundManager_TypeInfo, v3);
    this = (AssetManager_o *)sub_1C3B764(&StringLiteral_9486/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, v4);
    byte_4C21012 = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1C3B9C0(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9486/*"OPTION_TD_PLAY_SPEED_EXPLANATION"*/, 0LL);
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

  if ( (byte_4C20FB0 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4C20FB0 = 1;
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
    v9 = sub_1C76C54(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C20FD3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4C20FD3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3B9C0(v4, v5);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C20FF7 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager__coUnloadUnusedAssets_d__138_TypeInfo, method);
    byte_4C20FF7 = 1;
  }
  v3 = sub_1C3B9B0(AssetManager__coUnloadUnusedAssets_d__138_TypeInfo);
  AssetManager__coUnloadUnusedAssets_d__138___ctor((AssetManager__coUnloadUnusedAssets_d__138_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
      return System_String__Equals_63376928(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_63376928(
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
      sub_1C3B9C8(list1, list2);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_39211052(
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
              sub_1C3B9C0(0LL, list);
            assetList = (AssetData_array *)System_String__Equals_63376928(name, (System_String_o *)list, 0LL);
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
      sub_1C3B9C8(assetList, list);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_39210780(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_63376928(v3, name, 0LL);
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

  if ( (byte_4C20FB8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4C20FB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3B9C0(v4, v5);
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

  if ( (byte_4C20FD6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4C20FD6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v9, v10);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__downloadAssetStorage_39217560(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4C20FD7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C20FD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v7, v8);
  return AssetManager__DownloadAssetStorage_39217752((AssetManager_o *)Instance, nameList, callbackFunc, 1, v9);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C20FC5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, name);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C20FC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C20FE3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C20FDC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C20FDD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C20FD1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FD1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v7);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_39221112(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FDE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
  return AssetManager__GetAssetStorage_39221292((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__getAssetStorage_39221560(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C20FDF & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C20FDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v7, v8);
  return AssetManager__GetAssetStorage_39221748((AssetManager_o *)Instance, name, callbackFunc, v9);
}


bool __fastcall AssetManager__getAsset_39211808(
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

  if ( (byte_4C20FC6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, name);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4C20FC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v9, v10);
  return AssetManager__GetAsset_39212016((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


bool __fastcall AssetManager__getAsset_39212116(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C20FC7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C20FC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v7, v8);
  return AssetManager__GetAsset_39212304((AssetManager_o *)Instance, name, callbackFunc, v9);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C20FCC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4C20FCC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1C3B9C0(v4, v5);
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

  if ( (byte_4C20FC2 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v3);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1C3B764(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_25438, v6);
    sub_1C3B764(&StringLiteral_1059/*"/*"*/, v7);
    byte_4C20FC2 = 1;
  }
  v8 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1C3B9B0(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v8, 0LL);
  v9 = (System_Text_UTF8Encoding_o *)sub_1C3B9B0(System_Text_UTF8Encoding_TypeInfo);
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
  v13 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
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
        sub_1C3B9C8(appended, v11);
      v20 = v12->m_Items[v18 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
      if ( !v13 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v13,
                   (System_String_o *)StringLiteral_25438,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v17) = v12->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1C3B9C0(appended, v11);
  }
LABEL_11:
  if ( !v13 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_62529764(v13, (System_String_o *)StringLiteral_1059/*"/*"*/, 0LL);
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

  if ( (byte_4C20FC1 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_1864/*"ACCOUNT_DELETE_PASSWORD_DECIDE"*/, v3);
    sub_1C3B764(&StringLiteral_21331/*"mstEventFatigueRecovery"*/, v4);
    byte_4C20FC1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1C3B9C0(v5, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v7 = System_String__Concat_63368612((System_String_o *)StringLiteral_21331/*"mstEventFatigueRecovery"*/, v6->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v7, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager__getTime(0LL) / 300;
      v8 = System_Int64__ToString((int64_t)&v10, 0LL);
      return System_String__Concat_63379872(url, (System_String_o *)StringLiteral_1864/*"ACCOUNT_DELETE_PASSWORD_DECIDE"*/, v8, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_39184044(AssetData_o *data, const MethodInfo *method)
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  char *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
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
  struct System_String_o *assetBundleDateVersion; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v78; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C20FC3 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&string___TypeInfo, v4);
    sub_1C3B764(&StringLiteral_16438/*"animationId"*/, v5);
    sub_1C3B764(&StringLiteral_21331/*"mstEventFatigueRecovery"*/, v6);
    sub_1C3B764(&StringLiteral_1865/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/, v7);
    byte_4C20FC3 = 1;
  }
  v8 = AssetManager_TypeInfo;
  v78 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_27;
  v11 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v10);
  DataServerAddress = (char *)System_String__Concat_63368612(v11, DownloadName, 0LL);
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
    v15 = System_String__Concat_63368612(
            (System_String_o *)StringLiteral_21331/*"mstEventFatigueRecovery"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v13, v15, 0LL) )
    {
      DataServerAddress = (char *)sub_1C3B80C(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v22 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v13;
        sub_1C3B708((PartyOrganizationUtility_o *)(DataServerAddress + 32), (int64_t)v13, v16, v17, v18, v19, v20, v21);
        if ( *((_DWORD *)v22 + 6) <= 1u )
          goto LABEL_28;
        v29 = StringLiteral_1865/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/;
        *((_QWORD *)v22 + 5) = StringLiteral_1865/*"ACCOUNT_DELETE_PASSWORD_HIDDEN_STR"*/;
        sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 40), v29, v23, v24, v25, v26, v27, v28);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v22 + 6) <= 2u )
          goto LABEL_28;
        v36 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v22 + 6) = v36;
        sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 48), v36, v30, v31, v32, v33, v34, v35);
        if ( *((_DWORD *)v22 + 6) <= 3u )
          goto LABEL_28;
        v43 = StringLiteral_16438/*"animationId"*/;
        *((_QWORD *)v22 + 7) = StringLiteral_16438/*"animationId"*/;
        sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 56), v43, v37, v38, v39, v40, v41, v42);
        if ( *((_DWORD *)v22 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v22 + 8) = assetBundleDateVersion;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)(v22 + 64),
          (int64_t)assetBundleDateVersion,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        if ( *((_DWORD *)v22 + 6) <= 5u )
          goto LABEL_28;
        v57 = StringLiteral_16438/*"animationId"*/;
        *((_QWORD *)v22 + 9) = StringLiteral_16438/*"animationId"*/;
        sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 72), v57, v51, v52, v53, v54, v55, v56);
        HIDWORD(v78) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v78 + 4, 0LL);
        if ( *((_DWORD *)v22 + 6) <= 6u
          || (*((_QWORD *)v22 + 10) = DataServerAddress,
              sub_1C3B708(
                (PartyOrganizationUtility_o *)(v22 + 80),
                (int64_t)DataServerAddress,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63),
              *((_DWORD *)v22 + 6) <= 7u)
          || (v70 = StringLiteral_16438/*"animationId"*/,
              *((_QWORD *)v22 + 11) = StringLiteral_16438/*"animationId"*/,
              sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 88), v70, v64, v65, v66, v67, v68, v69),
              LODWORD(v78) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v78, 0LL),
              *((_DWORD *)v22 + 6) <= 8u) )
        {
LABEL_28:
          sub_1C3B9C8(DataServerAddress, v10);
        }
        *((_QWORD *)v22 + 12) = DataServerAddress;
        sub_1C3B708((PartyOrganizationUtility_o *)(v22 + 96), (int64_t)DataServerAddress, v71, v72, v73, v74, v75, v76);
        return System_String__Concat_63382140((System_String_array *)v22, 0LL);
      }
LABEL_27:
      sub_1C3B9C0(DataServerAddress, v10);
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

  if ( (byte_4C20FBC & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    byte_4C20FBC = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v3 = AssetManager_TypeInfo;
  v4 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_63368612(v4, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4C20FBA & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    byte_4C20FBA = 1;
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

  if ( (byte_4C20FBB & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    byte_4C20FBB = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_63368612(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4C20FB9 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v1);
    byte_4C20FB9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C2101F )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v1);
    byte_4C2101F = 1;
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

  if ( (byte_4C20FB3 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, v1);
    sub_1C3B764(&ManagerConfig_TypeInfo, v2);
    byte_4C20FB3 = 1;
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

  if ( (byte_4C20FE9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_4C20FE9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1C3B9C0(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v17,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v17.fields._currentValue;
    if ( !v17.fields._currentValue )
      sub_1C3B9C0(v10, v11);
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
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v14 & (v15 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FCD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__isExistAssetStorage_39214016(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FCE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FCE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
  return AssetManager__IsExistAssetStorage_39214196((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_4C20FCF & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FCF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      sub_1C3B9C0(v5, v6);
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


bool __fastcall AssetManager__isNeedDownload_39214564(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FD0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FD0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
  return AssetManager__IsNeedDownload_39214744((AssetManager_o *)Instance, nameList, v7);
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

  if ( (byte_4C20FC4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, name);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4C20FC4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v9, v10);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FE2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FE2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C20FD8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4C20FD8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_39219528(
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

  if ( (byte_4C20FDA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4C20FDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__loadAssetStorage_39219736(
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

  if ( (byte_4C20FDB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4C20FDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v9, v10);
  return AssetManager__LoadAssetStorage_39219944(
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

  if ( (byte_4C20FD9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_4C20FD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1C3B9C0(v11, v12);
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

  if ( (byte_4C20FD4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4C20FD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3B9C0(v4, v5);
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

  if ( (byte_4C20FC8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, name);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C20FC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C3B9C0(v7, v8);
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

  if ( (byte_4C20FE4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C20FE0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FE0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C3B9C0(v5, v6);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage_39222080(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FE1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C3B9C0(v5, v6);
    AssetManager__ReleaseAssetStorage_39222256((AssetManager_o *)Instance, nameList, v7);
  }
}


void __fastcall AssetManager__releaseAsset_39212804(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C20FC9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, nameList);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4C20FC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1C3B9C0(v7, v8);
    AssetManager__ReleaseAsset_39212988((AssetManager_o *)Instance, type, nameList, v9);
  }
}


void __fastcall AssetManager__releaseAsset_39213104(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C20FCA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FCA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C3B9C0(v5, v6);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v7);
  }
}


void __fastcall AssetManager__releaseAsset_39213312(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FCB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C3B9C0(v5, v6);
    AssetManager__ReleaseAsset_39213488((AssetManager_o *)Instance, assetInfoList, v7);
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

  if ( (byte_4C20FB1 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4C20FB1 = 1;
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
    v9 = sub_1C76C54(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C20FD2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FD2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C20FD5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v1);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4C20FD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C3B9C0(v4, v5);
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

  if ( (byte_4C20FB7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, isUse);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4C20FB7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_1C3B9C0(v5, v6);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callbackFunc, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39235780(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39236000(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_1C3B708(
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

  if ( (byte_4C21013 & 1) == 0 )
  {
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_4C21013 = 1;
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
    sub_1C3BC80(v7);
LABEL_7:
    p_callbackFunc2->klass = (PartyOrganizationUtility_c *)v14;
  }
  sub_1C3B708(p_callbackFunc2, v14, v8, v9, v10, v11, v12, v13);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1C3B9C0(this, method);
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
    LOBYTE(data) = AssetData__IsSame_39186908(data, type, name, method);
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

  if ( (byte_4C21014 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C21014 = 1;
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A7C214;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7C1D4;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct AssetData_o *asset; // x1
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4C21018 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_AssetManager___c__DisplayClass184_0__AssetObjectListSetupAndCall_b__0__, v3);
    sub_1C3B764(&AssetManager___c__DisplayClass184_0_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4C21018 = 1;
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
  v7 = sub_1C3B9B0(AssetManager___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  asset = this->fields.asset;
  *(_QWORD *)(v7 + 16) = asset;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)asset, v10, v11, v12, v13, v14, v15);
  v17 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_AssetManager___c__DisplayClass184_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v18 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
  this->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, (int64_t)v18, v20, v21, v22, v23, v24, v25);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__AssetObjectListSetupAndCall_d__184_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct AssetData_array *assetList; // x1
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4C21019 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_AssetManager___c__DisplayClass185_0__AssetObjectListSetupAndCall_b__0__, v3);
    sub_1C3B764(&AssetManager___c__DisplayClass185_0_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4C21019 = 1;
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
  v7 = sub_1C3B9B0(AssetManager___c__DisplayClass185_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  assetList = this->fields.assetList;
  *(_QWORD *)(v7 + 16) = assetList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)assetList, v10, v11, v12, v13, v14, v15);
  v17 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_AssetManager___c__DisplayClass185_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v18 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
  this->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, (int64_t)v18, v20, v21, v22, v23, v24, v25);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__AssetObjectListSetupAndCall_d__185_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
      sub_1C3B9C0(0LL, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__DelayLoadStart_d__149_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_String_o *v39; // x22
  const MethodInfo *v40; // x1
  System_String_o *v41; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v43; // x1
  Il2CppObject *v44; // x0
  System_String_o *v45; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v47; // x25
  CommonUI_o *v48; // x21
  ErrorDialog_ClickDelegate_o *v49; // x24
  struct AssetManager___c__DisplayClass118_0_o *_8__1; // x8
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  bool result; // w0
  Il2CppObject *v66; // x21
  System_Action_o *v67; // x22
  AvalonSceneManager_c *v68; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v70; // x20
  PartyOrganizationUtility_o *v71; // x19
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v78; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v79; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4C2101A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__, v3);
    sub_1C3B764(&AvalonSceneManager_TypeInfo, v4);
    sub_1C3B764(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1C3B764(&LocalizationManager_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1C3B764(&Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v13);
    sub_1C3B764(&AssetManager___c__DisplayClass118_0_TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    sub_1C3B764(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    sub_1C3B764(&StringLiteral_25832, v18);
    sub_1C3B764(&StringLiteral_9414/*"OPEN_INTERRUPTION_WINDOW"*/, v19);
    sub_1C3B764(&StringLiteral_337/*"!!** setScrollPos mChildList Position: "*/, v20);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1C3B764(&StringLiteral_9412/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, v21);
    byte_4C2101A = 1;
  }
  memset(&v79, 0, sizeof(v79));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v57;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C3B708(p__2__current, (int64_t)v57, v59, v60, v61, v62, v63, v64);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_45;
    v2->fields.__8__1 = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__8__1, 0LL, v51, v52, v53, v54, v55, v56);
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
                                                                                  (const MethodInfo_3355598 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v78,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39C344C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v79,
            (const MethodInfo_345288C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    currentValue = (AssetData_o *)v79.fields._currentValue;
    if ( !v79.fields._currentValue )
      sub_1C3B9C0(v24, v25);
    monitor = (int)v79.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v79.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(v2->fields.attrib, (System_String_o *)v79.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_39225464(_4__this, currentValue, v29);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_39225464(_4__this, (AssetData_o *)v79.fields._currentValue, v26);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v79,
    (const MethodInfo_3452888 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_56:
    sub_1C3B9C0(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v32 = (Il2CppObject *)sub_1C3B9B0(AssetManager___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v32, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v32;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    if ( !v2->fields.__8__1 )
      goto LABEL_56;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9414/*"OPEN_INTERRUPTION_WINDOW"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9414/*"OPEN_INTERRUPTION_WINDOW"*/, 0LL);
    }
    else
    {
      v39 = (System_String_o *)StringLiteral_25832;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9412/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9412/*"OPEN_EVENT_QUEST_TITLE_LIMIT_UP"*/, 0LL);
    }
    else
    {
      v41 = (System_String_o *)StringLiteral_337/*"!!** setScrollPos mChildList Position: "*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v40);
    v44 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v43);
    v45 = System_String__Format(v41, v44, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v47 = (Il2CppObject *)v2->fields.__8__1;
    v48 = (CommonUI_o *)Instance;
    v49 = (ErrorDialog_ClickDelegate_o *)sub_1C3B9B0(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v49,
      v47,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v48 )
      goto LABEL_56;
    CommonUI__OpenDataUpdateDialog(v48, v39, v45, v49, 0, 0LL);
    goto LABEL_41;
  }
LABEL_47:
  v2->fields._isDispLogo_5__2 = 0;
  v66 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v67 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v67,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v66 )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v66,
                                                                                  v67,
                                                                                  0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_52;
  v68 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v68 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v68->static_fields->DEFAULT_FADE_TIME;
  v70 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v70, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v70;
  v71 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(v71, (int64_t)v70, v72, v73, v74, v75, v76, v77);
  *(_DWORD *)&v71[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  AssetManager_c *v52; // x0
  AssetManager_c *v53; // x0
  System_String_o *AllText; // x21
  System_String_o *v55; // x0
  UnityEngine_WaitForEndOfFrame_o *v56; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  bool result; // w0
  System_String_o *v65; // x21
  System_Char_array *v66; // x0
  System_String_o *v67; // x21
  System_Char_array *v68; // x0
  il2cpp_array_size_t max_length; // w8
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int v76; // w23
  __int64 *v77; // x8
  System_String_o *v78; // x0
  __int64 v79; // x1
  System_String_o *v80; // x22
  System_String_o *v81; // x22
  System_String_o *v82; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v84; // x1
  System_Byte_array *v85; // x23
  uint32_t v86; // w23
  System_Char_array *v87; // x0
  il2cpp_array_size_t v88; // w8
  AssetManager__InitCR_d__131_o *v89; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__131_o *v91; // x22
  System_String_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  AssetManager_c *v99; // x8
  int64_t v100; // x23
  struct AssetManager_StaticFields *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  AssetManager_c *v108; // x0
  int64_t *p_configFileUrl_5__2; // x8
  int64_t v110; // x23
  struct AssetManager_StaticFields *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  AssetManager_c *v118; // x0
  int64_t *p_loader_5__3; // x8
  int64_t v120; // x22
  struct AssetManager_StaticFields *v121; // x0
  int v122; // w8
  __int64 v123; // x21
  AssetManager__InitCR_d__131_o *v124; // x22
  System_String_o *v125; // x0
  int32_t v126; // w23
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v128; // x0
  int32_t v129; // w25
  System_String_o *v130; // x0
  int v131; // w8
  uint32_t v132; // w26
  System_String_o *v133; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v136; // x29
  System_String_o *v137; // x21
  AssetManager_c *v138; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  void *v140; // x1
  void *v141; // x1
  struct AssetManager_StaticFields *v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  void *v149; // x1
  struct AssetManager_StaticFields *v150; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  ManagerConfig_c *v157; // x0
  struct ManagerConfig_StaticFields *v158; // x8
  Il2CppObject *Instance; // x22
  ErrorDialog_ClickDelegate_o *v160; // x23
  AssetManager_c *v161; // x0
  System_String_o *ConfigFileAddress; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  System_String_o *v175; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v177; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v185; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v187; // x21
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  AssetManager__InitCR_d__131_o **v194; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v197; // s8
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  float v204; // s0
  bool v205; // zf
  float v206; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v209; // x22
  const MethodInfo *v210; // x1
  System_String_o *v211; // x22
  System_String_o *v212; // x0
  System_String_o *v213; // x0
  Il2CppObject *v214; // x22
  ManagerConfig_c *v215; // x0
  struct ManagerConfig_StaticFields *v216; // x8
  int64_t v217; // x1
  PartyOrganizationUtility_o *v218; // x19
  int v219; // w8
  AssetManager__InitCR_d__131_o *v220; // x22
  int v221; // w8
  int32_t v222; // w0
  int32_t v223; // w24
  System_String_o *v224; // x23
  System_String_o *v225; // x22
  System_Byte_array *v226; // x24
  uint32_t v227; // w24
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  int v240; // w8
  System_String_array *v241; // x25
  __int64 v242; // x22
  const MethodInfo *v243; // x1
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  int v250; // w8
  unsigned int v251; // w29
  AssetManager__InitCR_d__131_o *v252; // x27
  char v253; // w8
  System_String_o *v254; // x0
  AssetManager_c *v255; // x8
  int v256; // w9
  void **v257; // x11
  struct System_String_o **v258; // x10
  System_String_o *v259; // x27
  bool v260; // cc
  int64_t *v261; // x9
  int64_t *v262; // x10
  int64_t v263; // x24
  int64_t v264; // x23
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  System_String_o *v283; // x0
  System_String_o *v284; // x0
  int32_t v285; // w23
  System_String_o *v286; // x0
  const MethodInfo *v287; // x3
  int v288; // w8
  uint32_t v289; // w24
  System_String_o *v290; // x26
  AssetData_o *AssetData; // x0
  const MethodInfo *v292; // x6
  Il2CppObject *v293; // x27
  int64_t v294; // x2
  int32_t v295; // w3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  __int64 v300; // x8
  _QWORD *v301; // x9
  __int64 _2__current_low; // x10
  __int64 v303; // x8
  System_Collections_Generic_List_object__o *v304; // x27
  AssetData_o *v305; // x28
  int64_t v306; // x2
  int32_t v307; // w3
  System_String_o *v308; // x4
  BattleSetupInfo_o *v309; // x5
  FollowerInfo_o *v310; // x6
  PartyListViewItem_o *v311; // x7
  struct System_Object_array *items; // x8
  _QWORD *v313; // x9
  __int64 size; // x10
  Il2CppClass **v315; // x0
  AssetManager_c *v316; // x0
  int64_t v317; // x23
  struct AssetManager_StaticFields *v318; // x0
  struct AssetManager_StaticFields *v319; // x0
  int64_t v320; // x1
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  struct AssetManager_StaticFields *v327; // x0
  int64_t v328; // x1
  int64_t v329; // x2
  int32_t v330; // w3
  System_String_o *v331; // x4
  BattleSetupInfo_o *v332; // x5
  FollowerInfo_o *v333; // x6
  PartyListViewItem_o *v334; // x7
  _BOOL8 v335; // x0
  __int64 v336; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v338; // x0
  __int64 v339; // x1
  System_Collections_Generic_Dictionary_object__object__o *v340; // x0
  Il2CppObject *v341; // x22
  int64_t v342; // x2
  int32_t v343; // w3
  System_String_o *v344; // x4
  BattleSetupInfo_o *v345; // x5
  FollowerInfo_o *v346; // x6
  PartyListViewItem_o *v347; // x7
  ManagerConfig_c *v348; // x0
  struct ManagerConfig_StaticFields *v349; // x8
  Il2CppObject *v350; // x21
  ErrorDialog_ClickDelegate_o *v351; // x23
  UnityEngine_WaitForEndOfFrame_o *v352; // x20
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  ManagementManager_c *v359; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v361; // x21
  System_String_o *v362; // x22
  ErrorDialog_ClickDelegate_o *v363; // x23
  System_String_o *v364; // x22
  ErrorDialog_ClickDelegate_o *v365; // x23
  UnityEngine_WaitForEndOfFrame_o *v366; // x20
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  UnityEngine_WaitForSeconds_o *v373; // x20
  int64_t v374; // x2
  int32_t v375; // w3
  System_String_o *v376; // x4
  BattleSetupInfo_o *v377; // x5
  FollowerInfo_o *v378; // x6
  PartyListViewItem_o *v379; // x7
  const MethodInfo *v380; // x2
  int64_t v381; // x2
  int32_t v382; // w3
  System_String_o *v383; // x4
  BattleSetupInfo_o *v384; // x5
  FollowerInfo_o *v385; // x6
  PartyListViewItem_o *v386; // x7
  UnityEngine_WaitForEndOfFrame_o *v387; // x20
  int64_t v388; // x2
  int32_t v389; // w3
  System_String_o *v390; // x4
  BattleSetupInfo_o *v391; // x5
  FollowerInfo_o *v392; // x6
  PartyListViewItem_o *v393; // x7
  const MethodInfo *effectDistance; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistanceb; // [xsp+0h] [xbp-F0h]
  const MethodInfo *effectDistance_8; // [xsp+8h] [xbp-E8h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v399; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  PartyOrganizationUtility_o *v401; // [xsp+30h] [xbp-C0h]
  PartyOrganizationUtility_o *v402; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__131_o *v403; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v404; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v405; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v406; // [xsp+60h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4C2101B & 1) == 0 )
  {
    sub_1C3B764(&AssetDataListInfo_TypeInfo, method);
    sub_1C3B764(&AssetData_TypeInfo, v9);
    sub_1C3B764(&Method_AssetManager_OnClickRetryDialog__, v10);
    sub_1C3B764(&Method_AssetManager_OnClickWaitDebugDialog__, v11);
    sub_1C3B764(&AssetManager_TypeInfo, v12);
    sub_1C3B764(&CatAndMouseGame_TypeInfo, v13);
    sub_1C3B764(&char___TypeInfo, v14);
    sub_1C3B764(&ErrorDialog_ClickDelegate_TypeInfo, v15);
    sub_1C3B764(&Crc32_TypeInfo, v16);
    sub_1C3B764(&UnityEngine_Debug_TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetData__Add__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v27);
    sub_1C3B764(&LocalizationManager_TypeInfo, v28);
    sub_1C3B764(&ManagementManager_TypeInfo, v29);
    sub_1C3B764(&ManagerConfig_TypeInfo, v30);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_1C3B764(&UnityEngine_WaitForEndOfFrame_TypeInfo, v32);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v33);
    sub_1C3B764(&StringLiteral_2534/*"B063"*/, v34);
    sub_1C3B764(&StringLiteral_2530/*"B06"*/, v35);
    sub_1C3B764(&StringLiteral_2526/*"B051"*/, v36);
    sub_1C3B764(&StringLiteral_2150/*"Add:"*/, v37);
    sub_1C3B764(&StringLiteral_2522/*"B041"*/, v38);
    sub_1C3B764(&StringLiteral_16254/*"_txt_servant"*/, v39);
    sub_1C3B764(&StringLiteral_2531/*"B060"*/, v40);
    sub_1C3B764(&StringLiteral_2533/*"B062"*/, v41);
    sub_1C3B764(&StringLiteral_2524/*"B05"*/, v42);
    sub_1C3B764(&StringLiteral_25675, v43);
    sub_1C3B764(&StringLiteral_2525/*"B050"*/, v44);
    sub_1C3B764(&StringLiteral_11691/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, v45);
    sub_1C3B764(&StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/, v46);
    sub_1C3B764(&StringLiteral_2151/*"AddArtsCardIds"*/, v47);
    this = (AssetManager__InitCR_d__131_o *)sub_1C3B764(&StringLiteral_1/*""*/, v48);
    byte_4C2101B = 1;
  }
  memset(&v406, 0, sizeof(v406));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      v50 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v50 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v50->static_fields->cachePathName, 0LL) )
      {
        v51 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v51 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v51->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_120;
      }
      v52 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v52 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v52->static_fields->cacheListFileName, 0LL) )
        goto LABEL_120;
      v53 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v53 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v53->static_fields->cacheListFileName, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v55 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v65 = v55;
      if ( !v55 )
        goto LABEL_120;
      v66 = (System_Char_array *)sub_1C3B80C(char___TypeInfo, 1LL);
      if ( !v66 )
        sub_1C3B9C0(0LL, 0LL);
      if ( !v66->max_length )
        sub_1C3B9C8(v66, v66);
      v66->m_Items[2] = -257;
      v67 = System_String__Trim_63398360(v65, v66, 0LL);
      v68 = (System_Char_array *)sub_1C3B80C(char___TypeInfo, 2LL);
      if ( !v68 )
        sub_1C3B9C0(0LL, 0LL);
      max_length = v68->max_length;
      if ( !max_length )
        sub_1C3B9C8(v68, v68);
      v68->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1C3B9C8(v68, v68);
      v68->m_Items[3] = 10;
      if ( !v67 )
        sub_1C3B9C0(v68, v68);
      v76 = System_String__IndexOfAny(v67, v68, 0LL);
      if ( v76 < 2 )
      {
        v77 = &StringLiteral_2525/*"B050"*/;
        goto LABEL_96;
      }
      v78 = System_String__Substring_63387616(v67, 0, v76, 0LL);
      v80 = v78;
      if ( !v78 )
        sub_1C3B9C0(0LL, v79);
      if ( !System_String__StartsWith(v78, (System_String_o *)StringLiteral_25675, 0LL) )
      {
        v77 = &StringLiteral_2526/*"B051"*/;
        goto LABEL_96;
      }
      v81 = System_String__Substring(v80, 1, 0LL);
      v82 = System_String__Substring(v67, v76 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1C3B9C0(0LL, v84);
      v85 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v82,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v86 = Crc32__Compute(v85, 0LL);
      if ( System_UInt32__Parse(v81, 0LL) != v86 )
      {
        v77 = &StringLiteral_2522/*"B041"*/;
        goto LABEL_96;
      }
      v87 = (System_Char_array *)sub_1C3B80C(char___TypeInfo, 2LL);
      if ( !v87 )
        sub_1C3B9C0(0LL, 0LL);
      v88 = v87->max_length;
      if ( !v88 )
        sub_1C3B9C8(v87, v87);
      v87->m_Items[2] = 13;
      if ( v88 == 1 )
        sub_1C3B9C8(v87, v87);
      v87->m_Items[3] = 10;
      if ( !v82 )
        sub_1C3B9C0(v87, v87);
      this = (AssetManager__InitCR_d__131_o *)System_String__Split_63391004(v82, v87, 1, 0LL);
      v89 = this;
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
                                                (System_String_o *)StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v77 = &StringLiteral_2524/*"B05"*/;
LABEL_96:
        v137 = (System_String_o *)*v77;
        if ( *v77 )
        {
          v138 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v138 = AssetManager_TypeInfo;
          }
          static_fields = v138->static_fields;
          v140 = StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&static_fields->assetBundleMasterVersion,
            (int64_t)v140,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
          v141 = StringLiteral_1/*""*/;
          v142 = AssetManager_TypeInfo->static_fields;
          v142->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&v142->assetBundleDateVersion,
            (int64_t)v141,
            v143,
            v144,
            v145,
            v146,
            v147,
            v148);
          v149 = StringLiteral_1/*""*/;
          v150 = AssetManager_TypeInfo->static_fields;
          v150->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&v150->assetBundleBuildVersion,
            (int64_t)v149,
            v151,
            v152,
            v153,
            v154,
            v155,
            v156);
          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v157 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v157 = ManagerConfig_TypeInfo;
          }
          v158 = v157->static_fields;
          if ( v158->UseDebugCommand )
          {
            if ( !v157->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v157);
              v158 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v158->ServerDefaultType, (System_String_o *)StringLiteral_11691/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v160 = (ErrorDialog_ClickDelegate_o *)sub_1C3B9B0(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v160,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
              effectDistancea.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_16254/*"_txt_servant"*/,
                v137,
                v160,
                1,
                0,
                -1.0,
                1,
                effectDistancea,
                0LL);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v56, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v56;
                p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1C3B708(p__2__current, (int64_t)v56, v58, v59, v60, v61, v62, v63);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v89->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)v89->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
      if ( !this )
        goto LABEL_281;
      v91 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v92 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v99 = AssetManager_TypeInfo;
      v100 = (int64_t)v92;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v99 = AssetManager_TypeInfo;
      }
      v101 = v99->static_fields;
      v101->assetBundleMasterVersion = (struct System_String_o *)v100;
      sub_1C3B708((PartyOrganizationUtility_o *)&v101->assetBundleMasterVersion, v100, v93, v94, v95, v96, v97, v98);
      v108 = AssetManager_TypeInfo;
      if ( SLODWORD(v91->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = (int64_t *)&StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (int64_t *)&v91->fields._configFileUrl_5__2;
      v110 = *p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v108 = AssetManager_TypeInfo;
      }
      v111 = v108->static_fields;
      v111->assetBundleDateVersion = (struct System_String_o *)v110;
      sub_1C3B708((PartyOrganizationUtility_o *)&v111->assetBundleDateVersion, v110, v102, v103, v104, v105, v106, v107);
      v118 = AssetManager_TypeInfo;
      if ( SLODWORD(v91->fields.__2__current) <= 2 )
        p_loader_5__3 = (int64_t *)&StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (int64_t *)&v91->fields._loader_5__3;
      v120 = *p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v118 = AssetManager_TypeInfo;
      }
      v121 = v118->static_fields;
      v121->assetBundleBuildVersion = (struct System_String_o *)v120;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v121->assetBundleBuildVersion,
        v120,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
      v122 = (int)v89->fields.__2__current;
      if ( v122 >= 2 )
      {
        v123 = 5LL;
        v403 = v89;
        while ( (int)v123 - 4 < (unsigned int)v122 )
        {
          this = (AssetManager__InitCR_d__131_o *)*((_QWORD *)&v89->klass + v123);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
          if ( !this )
            goto LABEL_281;
          v124 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v125 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v125, 0LL);
          if ( LODWORD(v124->fields.__2__current) < 3 )
            goto LABEL_282;
          v126 = (int)this;
          this = (AssetManager__InitCR_d__131_o *)v124->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v124->fields._configFileUrl_5__2;
          v128 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v128, 0LL);
          if ( LODWORD(v124->fields.__2__current) <= 3 )
            goto LABEL_282;
          v129 = (int)this;
          this = *(AssetManager__InitCR_d__131_o **)&v124->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v130 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v130, 0LL);
          v131 = (int)v124->fields.__2__current;
          if ( (unsigned int)v131 <= 4 )
            goto LABEL_282;
          v132 = (unsigned int)this;
          v133 = v131 >= 6 ? (System_String_o *)v124[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v124->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v136 = (AssetData_o *)sub_1C3B9B0(AssetData_TypeInfo);
          AssetData___ctor_39186596(v136, 0, wait_5__6, v126, configFileUrl_5__2, v129, v132, v133, effectDistance);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v136,
            (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v89 = v403;
          ++v123;
          v122 = (int)v403->fields.__2__current;
          if ( (int)v123 - 4 >= v122 )
            goto LABEL_120;
        }
        goto LABEL_282;
      }
LABEL_120:
      v161 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v161);
      v8->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v8->fields._configFileUrl_5__2,
        (int64_t)ConfigFileAddress,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168);
      v8->fields._loader_5__3 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._loader_5__3, 0LL, v169, v170, v171, v172, v173, v174);
LABEL_123:
      v175 = v8->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v175, method);
      v177 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v8->fields._loader_5__3 = v177;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
        (int64_t)v177,
        v178,
        v179,
        v180,
        v181,
        v182,
        v183);
      this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v185 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v185 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v185->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v187 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v187, 0LL);
      v8->fields._wait_5__6 = v187;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__6,
        (int64_t)v187,
        v188,
        v189,
        v190,
        v191,
        v192,
        v193);
LABEL_129:
      v194 = (AssetManager__InitCR_d__131_o **)&v8->fields._loader_5__3;
      this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v194;
      if ( !*v194 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v197 = downloadProgress;
      v204 = UnityEngine_Time__get_unscaledTime(0LL);
      v205 = v197 == loadProgress_5__5;
      v206 = v204;
      if ( !v205 )
      {
        v215 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v215 = ManagerConfig_TypeInfo;
        }
        v216 = v215->static_fields;
        this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v206 + v216->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_153;
        }
LABEL_281:
        sub_1C3B9C0(this, method);
      }
      if ( v204 >= v8->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v194;
        if ( !*v194 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v214 = (Il2CppObject *)StringLiteral_2534/*"B063"*/;
          goto LABEL_249;
        }
        this = *v194;
        if ( !*v194 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v194 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v213 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v194,
                   0LL);
LABEL_155:
          v214 = (Il2CppObject *)v213;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v194,
                                                  0LL);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v209 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v209, 0LL) )
        {
          v211 = v8->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v212 = AssetManager__getUrlString(v211, v210);
          v213 = System_String__Concat_63368612((System_String_o *)StringLiteral_2533/*"B062"*/, v212, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__131_o *)sub_1C3B80C(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v209 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__131_o *)System_String__Trim_63398360(v209, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v220 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25675, 0LL) )
        {
          this = (AssetManager__InitCR_d__131_o *)sub_1C3B80C(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_281;
          v221 = (int)this->fields.__2__current;
          method = (const MethodInfo *)this;
          if ( !v221 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v221 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v222 = System_String__IndexOfAny((System_String_o *)v220, (System_Char_array *)this, 0LL);
          if ( v222 >= 2 )
          {
            v223 = v222;
            v224 = System_String__Substring_63387616((System_String_o *)v220, 1, v222 - 1, 0LL);
            v225 = System_String__Substring((System_String_o *)v220, v223 + 1, 0LL);
            this = (AssetManager__InitCR_d__131_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_281;
            v226 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__131_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                          this,
                                          v225,
                                          this->klass[1]._1.interfaceOffsets);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v227 = Crc32__Compute(v226, 0LL);
            if ( System_UInt32__Parse(v224, 0LL) == v227 )
            {
              if ( *v194 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v194, 0LL);
                *v194 = 0LL;
                sub_1C3B708(
                  (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
                  0LL,
                  v234,
                  v235,
                  v236,
                  v237,
                  v238,
                  v239);
              }
              if ( !v225 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__131_o *)sub_1C3B80C(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_281;
              v240 = (int)this->fields.__2__current;
              method = (const MethodInfo *)this;
              if ( v240 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v240 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v241 = System_String__Split_63391004(v225, (System_Char_array *)this, 1, 0LL);
                  v242 = sub_1C3B9B0(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v242, v243);
                  if ( !v241 )
                    goto LABEL_281;
                  v250 = v241->max_length;
                  v401 = (PartyOrganizationUtility_o *)(v242 + 16);
                  v402 = (PartyOrganizationUtility_o *)(v242 + 24);
                  v404 = (PartyOrganizationUtility_o *)(v242 + 32);
                  if ( v250 >= 1 )
                  {
                    v251 = 0;
                    while ( v251 < v250 )
                    {
                      this = (AssetManager__InitCR_d__131_o *)v241->m_Items[v251];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__Split(
                                                                (System_String_o *)this,
                                                                0x2Cu,
                                                                0,
                                                                0LL);
                      if ( !this )
                        goto LABEL_281;
                      v252 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1867/*"ACCOUNT_DELETE_PASSWORD_ISSUED_TITLE"*/,
                                                                0LL);
                      if ( !LODWORD(v252->fields.__2__current) )
                        goto LABEL_282;
                      v253 = (char)this;
                      this = (AssetManager__InitCR_d__131_o *)v252->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v253 & 1) != 0 )
                      {
                        v254 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v255 = AssetManager_TypeInfo;
                        v256 = (int)v252->fields.__2__current;
                        v257 = (void **)&v252->fields._loader_5__3;
                        v258 = &v252->fields._configFileUrl_5__2;
                        v259 = v254;
                        if ( v256 == 2 )
                          v257 = &StringLiteral_1/*""*/;
                        v260 = v256 <= 1;
                        if ( v256 <= 1 )
                          v261 = (int64_t *)&StringLiteral_1/*""*/;
                        else
                          v261 = (int64_t *)v258;
                        if ( v260 )
                          v262 = (int64_t *)&StringLiteral_1/*""*/;
                        else
                          v262 = (int64_t *)v257;
                        v263 = *v261;
                        v264 = *v262;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v255 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__131_o *)System_String__op_Inequality(
                                                                  v259,
                                                                  v255->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v242 )
                          goto LABEL_281;
                        v401->klass = (PartyOrganizationUtility_c *)v259;
                        sub_1C3B708(v401, (int64_t)v259, v265, v266, v267, v268, v269, v270);
                        v402->klass = (PartyOrganizationUtility_c *)v263;
                        sub_1C3B708(v402, v263, v271, v272, v273, v274, v275, v276);
                        v404->klass = (PartyOrganizationUtility_c *)v264;
                        sub_1C3B708(v404, v264, v277, v278, v279, v280, v281, v282);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25675,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v252->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__131_o *)v252->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__131_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v252->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__131_o *)v252->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v283 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v283, 0LL);
                            version = (int)this;
                            if ( LODWORD(v252->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__131_o *)v252->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v399 = v252->fields._configFileUrl_5__2;
                            v284 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v284, 0LL);
                            if ( LODWORD(v252->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v285 = (int)this;
                            this = *(AssetManager__InitCR_d__131_o **)&v252->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v286 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v286, 0LL);
                            v288 = (int)v252->fields.__2__current;
                            if ( (unsigned int)v288 <= 4 )
                              goto LABEL_282;
                            v289 = (unsigned int)this;
                            if ( v288 >= 6 )
                              klass = (System_String_o *)v252[1].klass;
                            else
                              klass = 0LL;
                            v290 = (System_String_o *)v252->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v290,
                                          v287);
                            if ( AssetData )
                            {
                              v293 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__131_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v399,
                                                                        v285,
                                                                        v289,
                                                                        klass,
                                                                        v292);
                              if ( !v242 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__131_o **)(v242 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v300 = *(_QWORD *)&this->fields.__1__state;
                              v301 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v300 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v300 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v293,
                                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v301[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v303 = v300 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v303 + 32) = v293;
                                sub_1C3B708(
                                  (PartyOrganizationUtility_o *)(v303 + 32),
                                  (int64_t)v293,
                                  v294,
                                  v295,
                                  v296,
                                  v297,
                                  v298,
                                  v299);
                              }
                              v290 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(v290, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v242 )
                                goto LABEL_281;
                              v304 = *(System_Collections_Generic_List_object__o **)(v242 + 40);
                              v305 = (AssetData_o *)sub_1C3B9B0(AssetData_TypeInfo);
                              AssetData___ctor_39186736(
                                v305,
                                0,
                                v290,
                                0,
                                version,
                                v399,
                                v285,
                                v289,
                                klass,
                                effectDistance_8);
                              if ( !v304 )
                                goto LABEL_281;
                              items = v304->fields._items;
                              v313 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v304->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v304->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v304,
                                  (Il2CppObject *)v305,
                                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v313[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v315 = &items->obj.klass + size;
                                v304->fields._size = size + 1;
                                v315[4] = (Il2CppClass *)v305;
                                sub_1C3B708(
                                  (PartyOrganizationUtility_o *)(v315 + 4),
                                  (int64_t)v305,
                                  v306,
                                  v307,
                                  v308,
                                  v309,
                                  v310,
                                  v311);
                              }
                            }
                          }
                        }
                      }
                      v250 = v241->max_length;
                      if ( (int)++v251 >= v250 )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v242 )
                    goto LABEL_281;
                  v316 = AssetManager_TypeInfo;
                  v317 = (int64_t)v401->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v316 = AssetManager_TypeInfo;
                  }
                  v318 = v316->static_fields;
                  v318->assetBundleMasterVersion = (struct System_String_o *)v317;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)&v318->assetBundleMasterVersion,
                    v317,
                    v244,
                    v245,
                    v246,
                    v247,
                    v248,
                    v249);
                  v319 = AssetManager_TypeInfo->static_fields;
                  v320 = (int64_t)v402->klass;
                  v319->assetBundleDateVersion = (struct System_String_o *)v402->klass;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)&v319->assetBundleDateVersion,
                    v320,
                    v321,
                    v322,
                    v323,
                    v324,
                    v325,
                    v326);
                  v327 = AssetManager_TypeInfo->static_fields;
                  v328 = (int64_t)v404->klass;
                  v327->assetBundleBuildVersion = (struct System_String_o *)v404->klass;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)&v327->assetBundleBuildVersion,
                    v328,
                    v329,
                    v330,
                    v331,
                    v332,
                    v333,
                    v334);
                  this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__131_o **)(v242 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v405,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v406 = v405;
                  while ( 1 )
                  {
                    v335 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v406,
                             (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v335 )
                      break;
                    current = v406.fields._current;
                    if ( !v406.fields._current )
                      sub_1C3B9C0(v335, v336);
                    v338 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v338 )
                      sub_1C3B9C0(0LL, v336);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v338,
                            (Il2CppObject *)v406.fields._current[1].monitor,
                            (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v340 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v340 )
                        sub_1C3B9C0(0LL, v339);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v340,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v406,
                    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v380);
LABEL_280:
                  v8->fields._configFileUrl_5__2 = 0LL;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)&v8->fields._configFileUrl_5__2,
                    0LL,
                    v228,
                    v229,
                    v230,
                    v231,
                    v232,
                    v233);
                  v8->fields._loader_5__3 = 0LL;
                  sub_1C3B708(
                    (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
                    0LL,
                    v381,
                    v382,
                    v383,
                    v384,
                    v385,
                    v386);
                  v387 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v387, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v387;
                  v218 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1C3B708(v218, (int64_t)v387, v388, v389, v390, v391, v392, v393);
                  v219 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1C3B9C8(this, method);
            }
            v341 = (Il2CppObject *)StringLiteral_2530/*"B06"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v341, 0LL);
          }
        }
        v214 = (Il2CppObject *)StringLiteral_2531/*"B060"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v214, 0LL);
LABEL_249:
        if ( *v194 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v194, 0LL);
          *v194 = 0LL;
          sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._loader_5__3, 0LL, v342, v343, v344, v345, v346, v347);
        }
        if ( !v214 )
          goto LABEL_277;
        v348 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v348 = ManagerConfig_TypeInfo;
        }
        v349 = v348->static_fields;
        if ( v349->UseDebugCommand )
        {
          if ( !v348->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v348);
            v349 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v349->ServerDefaultType, (System_String_o *)StringLiteral_11691/*"SERVANT_STATUS_TOTAL_FRIENDSHIP"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v350 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v351 = (ErrorDialog_ClickDelegate_o *)sub_1C3B9B0(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v351,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v350 )
              goto LABEL_281;
            *(_QWORD *)&effectDistanceb.fields.hasValue = 0LL;
            effectDistanceb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v350,
              (System_String_o *)StringLiteral_16254/*"_txt_servant"*/,
              (System_String_o *)v214,
              v351,
              1,
              0,
              -1.0,
              1,
              effectDistanceb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v352 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v352, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v352;
              v218 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C3B708(v218, (int64_t)v352, v353, v354, v355, v356, v357, v358);
              v219 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4C2101D )
        {
          sub_1C3B764(&ManagementManager_TypeInfo, method);
          byte_4C2101D = 1;
        }
        v359 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v359 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v359->static_fields->isDuringStartup;
        v361 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v362 = LocalizationManager__Get((System_String_o *)StringLiteral_2150/*"Add:"*/, 0LL);
            v363 = (ErrorDialog_ClickDelegate_o *)sub_1C3B9B0(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v363,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v361 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v361, (System_String_o *)StringLiteral_1/*""*/, v362, v363, 0, 0LL);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v366 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v366, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v366;
              v218 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C3B708(v218, (int64_t)v366, v367, v368, v369, v370, v371, v372);
              v219 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v373 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v373, 1.0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v373;
            v218 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C3B708(v218, (int64_t)v373, v374, v375, v376, v377, v378, v379);
            v219 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v364 = LocalizationManager__Get((System_String_o *)StringLiteral_2151/*"AddArtsCardIds"*/, 0LL);
        v365 = (ErrorDialog_ClickDelegate_o *)sub_1C3B9B0(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v365, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v361 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v361, (System_String_o *)StringLiteral_1/*""*/, v364, v365, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v217 = (int64_t)v8->fields._wait_5__6;
      v8->fields.__2__current = (Il2CppObject *)v217;
      v218 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C3B708(v218, v217, v198, v199, v200, v201, v202, v203);
      v219 = 2;
LABEL_278:
      *(_DWORD *)&v218[-1].fields._IsQuestStartMenuMode_k__BackingField = v219;
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
      sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.initCRW, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__InitCR_d__131_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  if ( (byte_4C2101C & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1C3B764(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method);
    byte_4C2101C = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C3B9C0(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (int64_t)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C3B708(p__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  if ( (byte_4C21015 & 1) != 0 )
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
    sub_1C3B764(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4C21015 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70916020(0LL);
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

  if ( (byte_4C21016 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_1C3B764(&AssetLoader_LoadEndHandler_TypeInfo, v3);
    byte_4C21016 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (AssetLoader_LoadEndHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v6, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v7);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1C3B9C0(v8, v9);
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
  if ( (byte_4C21017 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Remove__, data);
    this = (AssetManager___c__DisplayClass169_0_o *)sub_1C3B764(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5);
    byte_4C21017 = 1;
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
                                                    (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1C3B9C0(this, data);
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
    sub_1C3B9C0(this, method);
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
        sub_1C3B9C8(this, method);
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
    sub_1C3B9C0(this, method);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
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
  int64_t wait_5__2; // x1
  PartyOrganizationUtility_o *v20; // x19
  bool v21; // w21
  UnityEngine_AsyncOperation_o *v22; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct AssetManager_ResourceUnloadEventHandler_o *v30; // x8
  PartyOrganizationUtility_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  v2 = this;
  if ( (byte_4C21020 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    this = (AssetManager__coUnloadUnusedAssets_d__138_o *)sub_1C3B764(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4C21020 = 1;
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
    v30 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields.temporaryPartyInfo + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v30->fields.m_target)(
        v30->fields.original_method_info,
        *(_QWORD *)&v30->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1C3B708(p_unloadCallbacks, 0LL, v33, v34, v35, v36, v37, v38);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
      v2->fields._wait_5__2 = v6;
      sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields._wait_5__2, (int64_t)v6, v7, v8, v9, v10, v11, v12);
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
      v21 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v22 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C3B708(p__2__current, (int64_t)v22, v24, v25, v26, v27, v28, v29);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v21;
    }
LABEL_19:
    sub_1C3B9C0(this, method);
  }
  wait_5__2 = (int64_t)v2->fields._wait_5__2;
  v2->fields.__2__current = (Il2CppObject *)wait_5__2;
  v20 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(v20, wait_5__2, v13, v14, v15, v16, v17, v18);
  v21 = 1;
  *(_DWORD *)&v20[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v21;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_AssetManager__coUnloadUnusedAssets_d__138_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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