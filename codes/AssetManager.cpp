void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct AssetManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct AssetManager_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct AssetManager_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct AssetManager_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct AssetManager_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct AssetManager_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  struct AssetManager_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  struct AssetManager_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_438AA2C & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&StringLiteral_2174/*"Asset"*/);
    sub_B775C4(&StringLiteral_2187/*"AssetStorageBack.txt"*/);
    sub_B775C4(&StringLiteral_21637/*"offline"*/);
    sub_B775C4(&StringLiteral_2186/*"AssetStorage.txt"*/);
    sub_B775C4(&StringLiteral_2188/*"AssetStorageCreate.txt"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_21707/*"online"*/);
    byte_438AA2C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AssetManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2174/*"Asset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2174/*"Asset"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = AssetManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21637/*"offline"*/;
  v9->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_21637/*"offline"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->SAVE_DATA_OFFLINE, v10, v11, v12, v13, v14, v15, v16);
  v17 = AssetManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_21707/*"online"*/;
  v17->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_21707/*"online"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->SAVE_DATA_ONLINE, v18, v19, v20, v21, v22, v23, v24);
  v25 = AssetManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_2186/*"AssetStorage.txt"*/;
  v25->configFileName = (struct System_String_o *)StringLiteral_2186/*"AssetStorage.txt"*/;
  sub_B77560((BattleServantConfConponent_o *)&v25->configFileName, v26, v27, v28, v29, v30, v31, v32);
  v33 = AssetManager_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_2188/*"AssetStorageCreate.txt"*/;
  v33->createConfigFileName = (struct System_String_o *)StringLiteral_2188/*"AssetStorageCreate.txt"*/;
  sub_B77560((BattleServantConfConponent_o *)&v33->createConfigFileName, v34, v35, v36, v37, v38, v39, v40);
  v41 = AssetManager_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_2187/*"AssetStorageBack.txt"*/;
  v41->backConfigFileName = (struct System_String_o *)StringLiteral_2187/*"AssetStorageBack.txt"*/;
  sub_B77560((BattleServantConfConponent_o *)&v41->backConfigFileName, v42, v43, v44, v45, v46, v47, v48);
  v49 = AssetManager_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_1/*""*/;
  v49->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&v49->assetBundleMasterVersion, v50, v51, v52, v53, v54, v55, v56);
  v57 = (System_Int32_array **)StringLiteral_1/*""*/;
  v58 = AssetManager_TypeInfo->static_fields;
  v58->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&v58->assetBundleDateVersion, v57, v59, v60, v61, v62, v63, v64);
  v65 = (System_Int32_array **)StringLiteral_1/*""*/;
  v66 = AssetManager_TypeInfo->static_fields;
  v66->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&v66->assetBundleBuildVersion, v65, v67, v68, v69, v70, v71, v72);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_438AA2B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader___ctor__);
    sub_B775C4(&System_Collections_Generic_List_AssetLoader__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_B775C4(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager___ctor__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AA2B = 1;
  }
  LOWORD(this->fields.initCRW) = 257;
  BYTE2(this->fields.initCRW) = 1;
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.assetBundleReleaseDic,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.assetResourceDic,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v17,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.requestConfigWriteData = (struct System_String_o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.requestConfigWriteData,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v24, v25, v26, v27, v28, v29, v30);
  LODWORD(this->fields.processingAssetLoaderList) = -1082130432;
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.downloadSize = (int64_t)v31;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.downloadSize,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  HIDWORD(this->fields.unloadCallbacks) = 1;
  v38 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B77694(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v38,
    (const MethodInfo_2F22A90 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this[1].klass = (AssetManager_c *)v38;
  sub_B77560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddCallbackLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x22
  int64_t downloadSize; // x23
  __int64 v10; // x24
  int v11; // w8
  __int64 v12; // x23
  const MethodInfo *v13; // x2
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v15; // x1
  AssetManager_LoadWaitStatus_o *v16; // x22
  char v17; // w19
  int v18; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v20; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_438AA17 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_438AA17 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  downloadSize = v8->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v10 >= v11 )
      break;
    if ( v11 <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v12 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v10 + 32);
    if ( !v12 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v12 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_24382336(
                                 (AssetData_o *)this,
                                 type,
                                 name,
                                 (const MethodInfo *)callbackFunc);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( callbackFunc )
          AssetLoader__add_endCallback2((AssetLoader_o *)v12, callbackFunc, v13);
        return 1;
      }
    }
    downloadSize = v8->fields.downloadSize;
    ++v10;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v8[1].klass;
  if ( !this )
LABEL_12:
    sub_B7769C(this, *(_QWORD *)&type);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v20,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_2F23158 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v20,
            (const MethodInfo_225C934 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v20,
                (const MethodInfo_225CA38 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v16 = Current;
    if ( !Current )
      sub_B7769C(0LL, v15);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v16, callbackFunc, 0LL);
      v17 = 1;
      v18 = 5;
      goto LABEL_23;
    }
  }
  v17 = 0;
  v18 = 3;
LABEL_23:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v20,
    (const MethodInfo_225C924 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v18 == 5) & v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x22
  int64_t downloadSize; // x23
  __int64 v10; // x24
  int v11; // w8
  __int64 v12; // x23
  const MethodInfo *v13; // x2
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v15; // x1
  AssetManager_LoadWaitStatus_o *v16; // x22
  char v17; // w19
  int v18; // w20
  __int64 v19; // x8
  int v20; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_438AA16 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_438AA16 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  downloadSize = v8->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v10 >= v11 )
      break;
    if ( v11 <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v12 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v10 + 32);
    if ( !v12 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v12 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_24382336(
                                 (AssetData_o *)this,
                                 type,
                                 name,
                                 (const MethodInfo *)callbackFunc);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = *(_QWORD *)(v12 + 24);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 84);
          if ( (v20 & 0x80000000) == 0 )
            *(_DWORD *)(v19 + 84) = v20 + 1;
          if ( callbackFunc )
            AssetLoader__add_endCallback2((AssetLoader_o *)v12, callbackFunc, v13);
          return 1;
        }
LABEL_12:
        sub_B7769C(this, *(_QWORD *)&type);
      }
    }
    downloadSize = v8->fields.downloadSize;
    ++v10;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v8[1].klass;
  if ( !this )
    goto LABEL_12;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v22,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_2F23158 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v22,
            (const MethodInfo_225C934 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v22,
                (const MethodInfo_225CA38 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v16 = Current;
    if ( !Current )
      sub_B7769C(0LL, v15);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddEntry(v16, 0LL);
      AssetManager_LoadWaitStatus__AddCallback(v16, callbackFunc, 0LL);
      v17 = 1;
      v18 = 9;
      goto LABEL_26;
    }
  }
  v17 = 0;
  v18 = 7;
LABEL_26:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v22,
    (const MethodInfo_225C924 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v18 == 9) & v17;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  AssetManager_LoadWaitStatus_o *v5; // x21
  __int64 v6; // x1
  AssetManager_c *klass; // x0

  if ( (byte_438AA19 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_LoadWaitStatus_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_438AA19 = 1;
  }
  v5 = (AssetManager_LoadWaitStatus_o *)sub_B77694(AssetManager_LoadWaitStatus_TypeInfo);
  AssetManager_LoadWaitStatus___ctor(v5, callbackFunc, 0LL);
  klass = this[1].klass;
  if ( !klass )
    sub_B7769C(0LL, v6);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)klass,
    (Mono_Net_CFNetwork_GetProxyData_o *)v5,
    (const MethodInfo_2F23084 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_24414504(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x19
  AssetManager_LoadWaitStatus_o *v5; // x21

  v4 = this;
  if ( (byte_438AA1A & 1) == 0 )
  {
    sub_B775C4(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_438AA1A = 1;
  }
  if ( !info
    || (*(_QWORD *)&v4->fields.isErrorDialog += info->fields.size,
        v5 = (AssetManager_LoadWaitStatus_o *)sub_B77694(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_23251876(v5, info, 0LL),
        (this = (AssetManager_o *)v4[1].klass) == 0LL) )
  {
    sub_B7769C(this, info);
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
    (Mono_Net_CFNetwork_GetProxyData_o *)v5,
    (const MethodInfo_2F23084 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_24424576(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x20
  AssetManager_LoadWaitStatus_o *v9; // x23

  v8 = this;
  if ( (byte_438AA1B & 1) == 0 )
  {
    sub_B775C4(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_438AA1B = 1;
  }
  if ( !info
    || (*(_QWORD *)&v8->fields.isErrorDialog += info->fields.size,
        v9 = (AssetManager_LoadWaitStatus_o *)sub_B77694(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_23251928(v9, info, callbackFunc, resourceNames, 0LL),
        (this = (AssetManager_o *)v8[1].klass) == 0LL) )
  {
    sub_B7769C(this, info);
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
    (Mono_Net_CFNetwork_GetProxyData_o *)v9,
    (const MethodInfo_2F23084 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v3; // x20
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *klass; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **v12; // x21
  struct Mono_Net_CFNetwork_GetProxyData_array *array; // x8

  if ( (byte_438AA0E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_B775C4(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    byte_438AA0E = 1;
  }
  v3 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B77694(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v3,
    (const MethodInfo_2F22A90 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  v12 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **)&this[1];
  klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this[1].klass;
  if ( !klass )
LABEL_12:
    sub_B7769C(klass, v4);
  while ( klass->fields._size > 0 )
  {
    klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                                            klass,
                                                                            (const MethodInfo_2F2329C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !klass )
      goto LABEL_12;
    array = klass->fields._array;
    v4 = klass;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      *(_QWORD *)&this->fields.isErrorDialog -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v3 )
        goto LABEL_12;
      System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
        v3,
        (Mono_Net_CFNetwork_GetProxyData_o *)klass,
        (const MethodInfo_2F23084 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    klass = *v12;
    if ( !*v12 )
      goto LABEL_12;
  }
  this[1].klass = (AssetManager_c *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  BYTE2(this->fields.writeRequestThread) = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_c *klass; // x0

  if ( (byte_438AA0F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    byte_438AA0F = 1;
  }
  klass = this[1].klass;
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  if ( !klass )
    sub_B7769C(0LL, method);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2F22D24 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_438A9DC & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9DC = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_B7769C(0LL, method);
  return System_String__StartsWith(assetBundleDateVersion, dateVersion, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__CheckEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x21
  int64_t downloadSize; // x23
  __int64 v8; // x22
  int v9; // w8
  __int64 v10; // x8
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v12; // x1
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v16; // [xsp+8h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_438AA18 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_438AA18 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  downloadSize = v6->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v8 >= v9 )
      break;
    if ( v9 <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v10 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v8 + 32);
    if ( !v10 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v10 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_24382336((AssetData_o *)this, type, name, method);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    downloadSize = v6->fields.downloadSize;
    ++v8;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v6[1].klass;
  if ( !this )
LABEL_12:
    sub_B7769C(this, *(_QWORD *)&type);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v16,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_2F23158 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v16,
            (const MethodInfo_225C934 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v16,
                (const MethodInfo_225CA38 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_B7769C(0LL, v12);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      v13 = 1;
      v14 = 2;
      goto LABEL_21;
    }
  }
  v14 = 0;
  v13 = 0;
LABEL_21:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v16,
    (const MethodInfo_225C924 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v14 == 2) & v13;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_438A9DB & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9DB = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v5->static_fields->assetBundleMasterVersion, masterVersion, 0LL) )
    return 0;
  v6 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v6 = AssetManager_TypeInfo;
  }
  return System_String__op_Equality(v6->static_fields->assetBundleDateVersion, dateVersion, 0LL);
}


void __fastcall AssetManager__ClearCacheWithoutSystemAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  System_String_o *Path; // x22
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-88h] BYREF
  int v14; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_438AA2A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_B775C4(&StringLiteral_12801/*"SYSTEM"*/);
    byte_438AA2A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v14 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleReleaseDic, 0LL) )
  {
    assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
    if ( !assetBundleReleaseDic
      || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_B7769C(assetBundleReleaseDic, v3);
    }
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v13,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v15 = v13;
    while ( 1 )
    {
      v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
             &v15,
             (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v5 )
        break;
      currentValue = (AssetData_o *)v15.fields.currentValue;
      if ( !v15.fields.currentValue )
        sub_B7769C(v5, v6);
      klass = v15.fields.currentValue[2].klass;
      if ( !klass )
        sub_B7769C(0LL, v6);
      if ( !System_String__Equals_44959932((System_String_o *)klass, (System_String_o *)StringLiteral_12801/*"SYSTEM"*/, 5, 0LL) )
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
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v15,
      (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x0
  int32_t Count; // w22
  System_Text_StringBuilder_o *v7; // x21
  AssetManager_c *v8; // x0
  AssetManager_c *v9; // x0
  AssetManager_c *v10; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *currentValue; // x23
  Il2CppObject *v14; // x22
  System_String_o *v15; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v17; // x1
  System_Byte_array *v18; // x24
  System_String_o *v19; // x1
  System_String_o *v20; // x21
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-88h] BYREF
  int v30[3]; // [xsp+20h] [xbp-70h]
  int v31; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-60h] BYREF
  uint32_t v33; // [xsp+58h] [xbp-38h] BYREF
  bool lockTaken; // [xsp+5Ch] [xbp-34h] BYREF

  if ( (byte_438AA12 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&CatAndMouseGame_TypeInfo);
    sub_B775C4(&Crc32_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_24186/*"~"*/);
    byte_438AA12 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  lockTaken = 0;
  v33 = 0;
  v31 = 0;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         assetBundleReleaseDic,
         (const MethodInfo_2F7D1F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            assetBundleReleaseDic,
            (const MethodInfo_2F7D1F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v7 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42945992(v7, 60 * Count, 0LL);
  if ( !v7 )
    goto LABEL_43;
  System_Text_StringBuilder__Append_42955208(v7, 0x40u, 0LL);
  v8 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v8 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_42951964(v7, v8->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_42955208(v7, 0x2Cu, 0LL);
    v9 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v9 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_42951964(v7, v9->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_42955208(v7, 0x2Cu, 0LL);
      v10 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v10 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_42951964(v7, v10->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_42955208(v7, 0xAu, 0LL);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_43:
    sub_B7769C(assetBundleReleaseDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v32 = v29;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v32,
            (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v11 )
      break;
    currentValue = v32.fields.currentValue;
    if ( !v32.fields.currentValue )
      sub_B7769C(v11, v12);
    System_Text_StringBuilder__Append_42955304(v7, (int32_t)v32.fields.currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_42955208(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42951964(v7, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_42955208(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42955304(v7, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_42955208(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42955584(v7, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_42955208(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42951964(v7, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_42951964(v7, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  }
  v30[0] = 299;
  v31 = 1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v32,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v31 = 0;
  v14 = *(Il2CppObject **)&this->fields.requestWriteCounter;
  lockTaken = 0;
  System_Threading_Monitor__Enter_15798384(v14, &lockTaken, 0LL);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                             v7,
                             v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B7769C(0LL, v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               v15,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v33 = Crc32__Compute(v18, 0LL);
  v19 = System_UInt32__ToString((uint32_t)&v33, 0LL);
  v20 = System_String__Concat_44905348(
          (System_String_o *)StringLiteral_24186/*"~"*/,
          v19,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          v15,
          0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v21 = (System_Int32_array **)CatAndMouseGame__CatGame8(v20, 0LL);
  *(_QWORD *)&this->fields.requestWriteCounter = v21;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v21, v22, v23, v24, v25, v26, v27);
  if ( isFast )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 0;
  }
  else if ( *(float *)&this->fields.processingAssetLoaderList < 0.0 )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 1065353216;
  }
  v30[0] = 436;
  v28 = ++v31;
  if ( lockTaken )
    System_Threading_Monitor__Exit(v14, 0LL);
  if ( v28 && v30[v28 - 1] == 436 )
    v31 = v28 - 1;
}


void __fastcall AssetManager__ConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  *(_QWORD *)&this->fields.reserveWriteRequest = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.reserveWriteRequest, 0LL, v4, v5, v6, v7, v8, v9);
  if ( LOBYTE(this->fields.unloadCallbacks) )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x19
  Il2CppObject *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  double v42; // d0
  unsigned int v43; // w8
  unsigned int v44; // w20
  __int64 v46; // x0
  __int64 v47; // x0
  System_String_o format; // [xsp+8h] [xbp-18h] BYREF

  *(double *)&format.klass = size;
  if ( (byte_438AA08 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_8474/*"KB"*/);
    sub_B775C4(&StringLiteral_24139/*"{0}{1}"*/);
    sub_B775C4(&StringLiteral_9435/*"N2"*/);
    sub_B775C4(&StringLiteral_13587/*"TB"*/);
    sub_B775C4(&StringLiteral_2297/*"B"*/);
    sub_B775C4(&StringLiteral_8869/*"MB"*/);
    sub_B775C4(&StringLiteral_6994/*"GB"*/);
    byte_438AA08 = 1;
  }
  v3 = sub_B775DC(string___TypeInfo, 5LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v11 = v3;
  v12 = (Il2CppObject *)StringLiteral_2297/*"B"*/;
  if ( StringLiteral_2297/*"B"*/ )
  {
    v12 = (Il2CppObject *)sub_B77684(StringLiteral_2297/*"B"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_35;
    v13 = (System_Int32_array **)StringLiteral_2297/*"B"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v11 + 32) = v13;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), v13, v5, v6, v7, v8, v9, v10);
  v12 = (Il2CppObject *)StringLiteral_8474/*"KB"*/;
  if ( StringLiteral_8474/*"KB"*/ )
  {
    v12 = (Il2CppObject *)sub_B77684(StringLiteral_8474/*"KB"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_35;
    v20 = (System_Int32_array **)StringLiteral_8474/*"KB"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v11 + 40) = v20;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 40), v20, v14, v15, v16, v17, v18, v19);
  v12 = (Il2CppObject *)StringLiteral_8869/*"MB"*/;
  if ( StringLiteral_8869/*"MB"*/ )
  {
    v12 = (Il2CppObject *)sub_B77684(StringLiteral_8869/*"MB"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_35;
    v27 = (System_Int32_array **)StringLiteral_8869/*"MB"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_34;
  *(_QWORD *)(v11 + 48) = v27;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 48), v27, v21, v22, v23, v24, v25, v26);
  v12 = (Il2CppObject *)StringLiteral_6994/*"GB"*/;
  if ( StringLiteral_6994/*"GB"*/ )
  {
    v12 = (Il2CppObject *)sub_B77684(StringLiteral_6994/*"GB"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v12 )
      goto LABEL_35;
    v34 = (System_Int32_array **)StringLiteral_6994/*"GB"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v11 + 56) = v34;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 56), v34, v28, v29, v30, v31, v32, v33);
  v12 = (Il2CppObject *)StringLiteral_13587/*"TB"*/;
  if ( !StringLiteral_13587/*"TB"*/ )
  {
    v41 = 0LL;
    goto LABEL_28;
  }
  v12 = (Il2CppObject *)sub_B77684(StringLiteral_13587/*"TB"*/, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
  if ( !v12 )
  {
LABEL_35:
    v47 = sub_B776BC(v12);
    sub_B77668(v47, 0LL);
  }
  v41 = (System_Int32_array **)StringLiteral_13587/*"TB"*/;
LABEL_28:
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_34;
  *(_QWORD *)(v11 + 64) = v41;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 64), v41, v35, v36, v37, v38, v39, v40);
  v42 = *(double *)&format.klass;
  v43 = -1;
  do
  {
    if ( v42 < 1000.0 )
      break;
    ++v43;
    v42 = v42 / 1000.0;
    *(double *)&format.klass = v42;
  }
  while ( v43 <= 2 );
  v44 = v43 + 1;
  v12 = (Il2CppObject *)System_Double__ToString_45061792(v42, &format, (const MethodInfo *)StringLiteral_9435/*"N2"*/);
  if ( v44 >= *(_DWORD *)(v11 + 24) )
  {
LABEL_34:
    v46 = sub_B776C8(v12);
    sub_B77668(v46, 0LL);
  }
  return System_String__Format_44897472(
           (System_String_o *)StringLiteral_24139/*"{0}{1}"*/,
           v12,
           *(Il2CppObject **)(v11 + 8LL * (int)v44 + 32),
           0LL);
}


void __fastcall AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *klass; // x0
  __int64 v4; // x1
  int64_t downloadSize; // x8
  int v6; // w8
  int v7; // w9
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int v10; // w20
  int v11; // w8
  int v12; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-98h] BYREF
  int v14[3]; // [xsp+20h] [xbp-80h]
  int v15; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_438AA02 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_438AA02 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  memset(&v16, 0, sizeof(v16));
  v15 = 0;
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this[1].klass;
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v13,
    klass,
    (const MethodInfo_2F23158 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v17 = v13;
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v17,
            (const MethodInfo_225C934 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v17,
            (const MethodInfo_225CA38 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_B7769C(0LL, v4);
  }
  v14[0] = 52;
  v15 = 1;
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v17,
    (const MethodInfo_225C924 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  v15 = 0;
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_28;
  v6 = *(_DWORD *)(downloadSize + 24);
  v7 = -1;
  do
    ++v7;
  while ( v7 < v6 );
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.assetBundleReleaseDic;
  if ( !klass )
    goto LABEL_28;
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)klass,
                                                                               (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)klass,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v16 = v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v16,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v16.fields.currentValue )
      sub_B7769C(v8, v9);
  }
  v14[0] = 131;
  v10 = ++v15;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v16,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v14[v10 - 1] == 131 )
    {
      --v10;
      v15 = v11;
    }
  }
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.requestConfigWriteData;
  if ( !klass
    || (klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)klass,
                                                                                     (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_28:
    sub_B7769C(klass, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)klass,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v16 = v13;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v16,
            (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  v14[v10] = 183;
  v12 = ++v15;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v16,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v12 && v14[v12 - 1] == 183 )
    v15 = v12 - 1;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438AA1E & 1) == 0 )
  {
    sub_B775C4(&AssetManager__DelayLoadStart_d__148_TypeInfo);
    byte_438AA1E = 1;
  }
  v3 = sub_B77694(AssetManager__DelayLoadStart_d__148_TypeInfo);
  AssetManager__DelayLoadStart_d__148___ctor((AssetManager__DelayLoadStart_d__148_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_438A9D4 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9D4 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v10);
    if ( AssetData )
    {
      if ( AssetData->fields.nowVersion == AssetData->fields.newVersion )
      {
        if ( callbackFunc )
          AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetData, 0LL);
      }
      else
      {
        AssetManager__AddLoadWaitStatus_24424576(this, AssetData, callbackFunc, 0LL, v12);
        HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
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
  HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(this, *(const MethodInfo **)&loadParallelMax);
}


void __fastcall AssetManager__DownloadAssetStorageAttribute(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438AA09 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_438AA09 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B7769C(assetBundleReleaseDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v15,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = (AssetData_o *)v15.fields.currentValue;
    if ( !v15.fields.currentValue )
      sub_B7769C(v8, v9);
    monitor = (int)v15.fields.currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v15.fields.currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v15.fields.currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_24414504(this, currentValue, v13);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_24414504(this, (AssetData_o *)v15.fields.currentValue, v10);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v15,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(this, v14);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438AA07 & 1) == 0 )
  {
    sub_B775C4(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo);
    byte_438AA07 = 1;
  }
  v7 = sub_B77694(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo);
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117___ctor(
    (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)attrib, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_24417304(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x19
  __int64 v7; // x9
  System_String_o *v8; // x8
  __int64 v9; // x22
  __int64 v10; // x23
  unsigned __int64 v11; // x9
  __int64 v12; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  __int64 v19; // x8
  unsigned __int64 v20; // x25
  signed __int64 v21; // x26
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  __int64 v25; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_438AA0A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    this = (AssetManager_o *)sub_B775C4(&StringLiteral_716/*", "*/);
    byte_438AA0A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !attribList )
LABEL_33:
    sub_B7769C(this, attribList);
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
      v9 = (int)v7;
      v10 = 5LL;
      do
      {
        this = (AssetManager_o *)System_String__Concat_44904220(
                                   v8,
                                   (System_String_o *)StringLiteral_716/*", "*/,
                                   *((System_String_o **)&attribList->obj.klass + v10),
                                   0LL);
        v11 = v10 - 3;
        if ( v10 - 3 >= v9 )
          goto LABEL_14;
        v8 = (System_String_o *)this;
        ++v10;
      }
      while ( v11 < attribList->max_length );
    }
LABEL_13:
    v12 = sub_B776C8(this);
    sub_B77668(v12, 0LL);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleReleaseDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this,
                             (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v27 = v26;
LABEL_17:
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v27,
            (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v13 )
      break;
    currentValue = (AssetData_o *)v27.fields.currentValue;
    if ( !v27.fields.currentValue )
      sub_B7769C(v13, v14);
    monitor = (int)v27.fields.currentValue[2].monitor;
    monitor_high = HIDWORD(v27.fields.currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high )
      {
        v19 = *(_QWORD *)&attribList->max_length;
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          v21 = (int)v19;
          while ( 1 )
          {
            v22 = System_String__op_Equality(attribList->m_Items[v20], currentValue->fields.attrib, 0LL);
            if ( v22 )
              break;
            if ( (__int64)++v20 >= v21 )
              goto LABEL_17;
            if ( v20 >= attribList->max_length )
            {
              v25 = sub_B776C8(v22);
              sub_B77668(v25, 0LL);
            }
          }
          AssetManager__AddLoadWaitStatus_24414504(v6, currentValue, v23);
        }
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_24414504(v6, (AssetData_o *)v27.fields.currentValue, v15);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v27,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(v6->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v6, v24);
}


bool __fastcall AssetManager__DownloadAssetStorage_24407264(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v5; // x8
  AssetManager_o *v9; // x20
  unsigned __int64 v10; // x23
  bool v11; // w25
  System_String_o *v12; // x1
  int v13; // w8
  const MethodInfo *v14; // x1
  __int64 v16; // x0

  if ( !nameList )
    sub_B7769C(this, 0LL);
  v5 = *(_QWORD *)&nameList->max_length;
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
      {
        v16 = sub_B776C8(this);
        sub_B77668(v16, 0LL);
      }
      v12 = nameList->m_Items[v10];
      if ( v12 )
      {
        if ( v11 )
        {
          this = (AssetManager_o *)AssetManager__DownloadAssetStorage(v9, v12, 0LL, 1, method);
          v13 = (unsigned __int8)this & 1;
        }
        else
        {
          v13 = 0;
        }
        v11 = v13 != 0;
      }
      LODWORD(v5) = nameList->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v5 );
  }
  AssetManager__AddLoadWaitStatus(v9, callbackFunc, (const MethodInfo *)callbackFunc);
  HIDWORD(v9->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v9, v14);
  return v11;
}


AssetData_o *__fastcall AssetManager__GetAsset(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__AssetData__o **p_requestConfigWriteData; // x8

  if ( type == 1 )
  {
    p_requestConfigWriteData = (System_Collections_Generic_Dictionary_string__AssetData__o **)&this->fields.requestConfigWriteData;
    return AssetManager__GetAssetData(this, *p_requestConfigWriteData, name, method);
  }
  if ( !type )
  {
    p_requestConfigWriteData = &this->fields.assetBundleReleaseDic;
    return AssetManager__GetAssetData(this, *p_requestConfigWriteData, name, method);
  }
  return 0LL;
}


AssetData_o *__fastcall AssetManager__GetAssetData(
        AssetManager_o *this,
        System_Collections_Generic_Dictionary_string__AssetData__o *dic,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438AA25 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_438AA25 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_B7769C(this, dic);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)name,
         &value,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
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

  result = AssetManager__GetAssetData(
             this,
             (System_Collections_Generic_Dictionary_string__AssetData__o *)this->fields.requestConfigWriteData,
             name,
             v3);
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

  result = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( result )
  {
    if ( !result->fields.objectList )
      return 0LL;
  }
  return result;
}


System_String_array *__fastcall AssetManager__GetAssetStorageList(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *currentValue; // x23
  System_String_o *monitor; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438AA0C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438AA0C = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v5 = System_String__Concat_44901936(path, (System_String_o *)StringLiteral_892/*"/"*/, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v17,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v17.fields.currentValue;
    if ( !v17.fields.currentValue )
      sub_B7769C(v9, v10);
    monitor = (System_String_o *)v17.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B7769C(0LL, v10);
    v13 = System_String__StartsWith(monitor, v5, 0LL);
    if ( v13 )
    {
      if ( !v6 )
        sub_B7769C(v13, v14);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)currentValue[1].monitor,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v17,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v6 )
LABEL_17:
    sub_B7769C(assetBundleReleaseDic, v7);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_24410384(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x8
  AssetData_array *v7; // x21
  unsigned __int64 v8; // x24
  BattleServantConfConponent_o *p_DispLog; // x22
  System_String_o *v10; // x2
  System_Int32_array **v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v19; // x0
  __int64 v20; // x0

  v4 = this;
  if ( (byte_438AA26 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B775C4(&AssetData___TypeInfo);
    byte_438AA26 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_B7769C(this, nameList);
  this = (AssetManager_o *)sub_B775DC(AssetData___TypeInfo, nameList->max_length);
  v6 = *(_QWORD *)&nameList->max_length;
  v7 = (AssetData_array *)this;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    p_DispLog = (BattleServantConfConponent_o *)&this->fields._DispLog;
    while ( v8 < (unsigned int)v6 )
    {
      v10 = nameList->m_Items[v8];
      if ( v10 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v4->fields.assetBundleReleaseDic, v10, v5);
        if ( this )
        {
          v11 = (System_Int32_array **)this;
          if ( this->fields.requestConfigWriteData )
          {
            if ( !v7 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_B77684(this, v7->obj.klass->_1.element_class);
            if ( !this )
            {
              v20 = sub_B776BC(0LL);
              sub_B77668(v20, 0LL);
            }
            if ( v8 >= v7->max_length )
              break;
            p_DispLog->klass = (BattleServantConfConponent_c *)v11;
            sub_B77560(p_DispLog, v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      LODWORD(v6) = nameList->max_length;
      ++v8;
      p_DispLog = (BattleServantConfConponent_o *)((char *)p_DispLog + 8);
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
    v19 = sub_B776C8(this);
    sub_B77668(v19, 0LL);
  }
  return v7;
}


bool __fastcall AssetManager__GetAssetStorage_24410872(
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
  AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v9);
  if ( AssetData )
  {
    if ( AssetData->fields.objectList )
    {
      if ( callbackFunc )
        AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetData, 0LL);
      goto LABEL_7;
    }
LABEL_8:
    LOBYTE(AssetData) = 0;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__GetAsset_24401328(
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
      AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, Asset, 0LL);
    goto LABEL_5;
  }
  return (char)Asset;
}


bool __fastcall AssetManager__GetAsset_24401628(
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
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v9);
    if ( !AssetData )
    {
      v12 = 1;
      v14 = AssetManager__AddCallbackLoadStatus(this, 1, name, callbackFunc, v11);
      if ( v14 )
        return v12;
      AssetData = AssetManager__GetAssetData(
                    (AssetManager_o *)v14,
                    (System_Collections_Generic_Dictionary_string__AssetData__o *)this->fields.requestConfigWriteData,
                    name,
                    v15);
      if ( !AssetData )
        return 0;
    }
    if ( callbackFunc )
      AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetData, 0LL);
  }
  return 1;
}


AssetData_o *__fastcall AssetManager__GetAsset_24425464(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0
  const MethodInfo *v7; // x3

  result = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( !result )
    return AssetManager__GetAssetData(
             0LL,
             (System_Collections_Generic_Dictionary_string__AssetData__o *)this->fields.requestConfigWriteData,
             name,
             v7);
  return result;
}


System_String_o *__fastcall AssetManager__GetDateVersion(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_438A9DE & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9DE = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  AssetManager_o *v2; // x19
  int64_t downloadSize; // x22
  int64_t v4; // x20
  __int64 v5; // x21
  int v6; // w8

  v2 = this;
  if ( (byte_438AA0B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    byte_438AA0B = 1;
  }
  downloadSize = v2->fields.downloadSize;
  if ( !downloadSize )
LABEL_10:
    sub_B7769C(this, method);
  v4 = *(_QWORD *)&v2->fields.isErrorDialog;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v5 >= v6 )
      return v4;
    if ( v6 <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = *(AssetManager_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v5 + 32);
    if ( this )
    {
      this = (AssetManager_o *)AssetLoader__get_LoadSize((AssetLoader_o *)this, method);
      downloadSize = v2->fields.downloadSize;
      v4 -= (int)this;
      ++v5;
      if ( downloadSize )
        continue;
    }
    goto LABEL_10;
  }
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

  if ( (byte_438A9DD & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9DD = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438AA10 & 1) == 0 )
  {
    sub_B775C4(&AssetManager__InitCR_d__130_TypeInfo);
    byte_438AA10 = 1;
  }
  v3 = sub_B77694(AssetManager__InitCR_d__130_TypeInfo);
  AssetManager__InitCR_d__130___ctor((AssetManager__InitCR_d__130_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *assetBundleDic; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  char v11; // w23
  const MethodInfo *v12; // x1
  int v13; // w20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  int v16; // w23
  int64_t downloadSize; // x20
  signed __int64 v18; // x8
  unsigned __int64 v19; // x21
  UnityEngine_Object_o *v20; // x20
  const MethodInfo *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **Path; // x20
  AssetManager_c *v29; // x8
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v31; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v34; // x0
  System_Int32_array **v35; // x0
  struct AssetManager_StaticFields *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct AssetManager_StaticFields *v43; // x8
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  System_Int32_array **v46; // x0
  struct AssetManager_StaticFields *v47; // x8
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct AssetManager_StaticFields *v54; // x8
  System_String_o *v55; // x20
  System_String_o *v56; // x0
  System_Int32_array **v57; // x0
  struct AssetManager_StaticFields *v58; // x8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-78h] BYREF
  int v66[2]; // [xsp+20h] [xbp-60h]
  int v67; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438AA04 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_438AA04 = 1;
  }
  memset(&i, 0, sizeof(i));
  v67 = 0;
  assetBundleDic = (System_Collections_IEnumerator_o *)this->fields.assetBundleDic;
  if ( assetBundleDic )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, assetBundleDic, 0LL);
    this->fields.assetBundleDic = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.assetBundleDic, 0LL, v4, v5, v6, v7, v8, v9);
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    assetResourceDic,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         assetResourceDic,
         (const MethodInfo_2F7D1F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v13 = 0;
  }
  else
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
    if ( !assetResourceDic )
      goto LABEL_52;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetResourceDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v65,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
      (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v11 = 0;
    for ( i = v65;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &i,
            (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v11 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v12) )
    {
      if ( !i.fields.currentValue )
        sub_B7769C(0LL, v12);
    }
    v66[0] = 115;
    v67 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &i,
      (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    v67 = 0;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
    if ( !assetResourceDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      assetResourceDic,
      (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v13 = v11 != 0;
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                     assetResourceDic,
                                                                                                     (const MethodInfo_2F7D1F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  if ( (int)assetResourceDic < 1 )
  {
    if ( !v13 )
      goto LABEL_31;
    goto LABEL_30;
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic,
                                                                                                     (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v65,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v65;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
          &i,
          (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        v13 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v15) )
  {
    if ( !i.fields.currentValue )
      sub_B7769C(0LL, v15);
  }
  v66[0] = 201;
  v16 = ++v67;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &i,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v16 && v66[v16 - 1] == 201 )
    v67 = v16 - 1;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    assetResourceDic,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( (v13 & 1) != 0 )
LABEL_30:
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v14);
LABEL_31:
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_52;
  LODWORD(v18) = *(_DWORD *)(downloadSize + 24);
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v20 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v19 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v20, 0LL);
      downloadSize = this->fields.downloadSize;
      if ( !downloadSize )
        goto LABEL_52;
      v18 = *(int *)(downloadSize + 24);
      ++v19;
    }
    while ( (__int64)v19 < v18 );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.downloadSize,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_AssetLoader__Clear__);
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this[1].klass;
  if ( !assetResourceDic )
LABEL_52:
    sub_B7769C(assetResourceDic, assetBundleDic);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)assetResourceDic,
    (const MethodInfo_2F22D24 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  BYTE2(this->fields.writeRequestThread) = 0;
  Path = (System_Int32_array **)AssetStorageCache__GetPath(v21);
  v29 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v29 = AssetManager_TypeInfo;
  }
  static_fields = v29->static_fields;
  static_fields->cachePathName = (struct System_String_o *)Path;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->cachePathName, Path, v22, v23, v24, v25, v26, v27);
  v31 = AssetManager_TypeInfo->static_fields;
  cachePathName = v31->cachePathName;
  configFileName = v31->configFileName;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v34 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v35 = (System_Int32_array **)System_String__Concat_44901936(cachePathName, v34, 0LL);
  v36 = AssetManager_TypeInfo->static_fields;
  v36->cacheListFileName = (struct System_String_o *)v35;
  sub_B77560((BattleServantConfConponent_o *)&v36->cacheListFileName, v35, v37, v38, v39, v40, v41, v42);
  v43 = AssetManager_TypeInfo->static_fields;
  v44 = v43->cachePathName;
  v45 = AndroidUtil__ConvertFileNameIfNeed(v43->createConfigFileName, 0LL);
  v46 = (System_Int32_array **)System_String__Concat_44901936(v44, v45, 0LL);
  v47 = AssetManager_TypeInfo->static_fields;
  v47->createCacheListFileName = (struct System_String_o *)v46;
  sub_B77560((BattleServantConfConponent_o *)&v47->createCacheListFileName, v46, v48, v49, v50, v51, v52, v53);
  v54 = AssetManager_TypeInfo->static_fields;
  v55 = v54->cachePathName;
  v56 = AndroidUtil__ConvertFileNameIfNeed(v54->backConfigFileName, 0LL);
  v57 = (System_Int32_array **)System_String__Concat_44901936(v55, v56, 0LL);
  v58 = AssetManager_TypeInfo->static_fields;
  v58->backCacheListFileName = (struct System_String_o *)v57;
  sub_B77560((BattleServantConfConponent_o *)&v58->backCacheListFileName, v57, v59, v60, v61, v62, v63, v64);
  BYTE1(this->fields.initCRW) = 0;
}


void __fastcall AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o **p_assetBundleDic; // x20
  System_Collections_IEnumerator_o *inited; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_assetBundleDic = &this->fields.assetBundleDic;
  if ( !this->fields.assetBundleDic )
  {
    BYTE2(this->fields.initCRW) = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)inited;
    sub_B77560((BattleServantConfConponent_o *)p_assetBundleDic, (System_Int32_array **)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_Collections_IEnumerator_o *)this->fields.assetBundleDic,
      0LL);
  }
}


bool __fastcall AssetManager__IsAssetStorageExistsButEmpty(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData->fields.objectList == 0LL;
  return (char)AssetData;
}


bool __fastcall AssetManager__IsExistAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0

  if ( (byte_438AA21 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_438AA21 = 1;
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    sub_B7769C(0LL, name);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetBundleReleaseDic,
           (System_Xml_XmlQualifiedName_o *)name,
           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_24403792(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  AssetManager_o *v5; // x20
  unsigned __int64 v6; // x21
  System_String_o *v7; // x1
  __int64 v9; // x0

  if ( !nameList )
    sub_B7769C(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 < 1 )
    return 1;
  v5 = this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
    }
    v7 = nameList->m_Items[v6];
    if ( v7 )
    {
      this = (AssetManager_o *)AssetManager__IsExistAssetStorage(v5, v7, method);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
    }
    LODWORD(v3) = nameList->max_length;
    if ( (__int64)++v6 >= (int)v3 )
      return 1;
  }
  return 0;
}


bool __fastcall AssetManager__IsInitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  return BYTE2(this->fields.initCRW);
}


bool __fastcall AssetManager__IsNeedDownload(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  return (char)AssetData;
}


bool __fastcall AssetManager__IsNeedDownload_24404352(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x21
  System_String_o *v8; // x2
  __int64 v10; // x0

  if ( !nameList )
    sub_B7769C(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v10 = sub_B776C8(this);
      sub_B77668(v10, 0LL);
    }
    v8 = nameList->m_Items[v7];
    if ( v8 )
    {
      this = (AssetManager_o *)AssetManager__GetAssetData(this, v6->fields.assetBundleReleaseDic, v8, v3);
      if ( this )
      {
        if ( LODWORD(this->fields.initCRW) != HIDWORD(this->fields.initCRW) )
          break;
      }
    }
    LODWORD(v4) = nameList->max_length;
    if ( (__int64)++v7 >= (int)v4 )
      return 0;
  }
  return 1;
}


void __fastcall AssetManager__LateUpdate(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetResourceDic; // x0
  int v4; // w21
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x0
  float v9; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v12; // x0
  AssetManager_c *v13; // x0
  AssetManager_c *v14; // x0
  AssetManager_c *v15; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  AssetManager_c *v21; // x0
  AssetManager_c *v22; // x0
  AssetManager_c *v23; // x0
  AssetManager_c *v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  System_IO_IOException_o *v33; // x20
  System_String_o *v34; // x0
  __int64 v35; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438AA15 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetManager_OnClickRetryDialog__);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&CommonServicePluginScript_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ManagementManager_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&System_IO_StreamWriter_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_B775C4(&StringLiteral_1817/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_B775C4(&StringLiteral_16036/*"[FFFF80]Download error for debug"*/);
    sub_B775C4(&StringLiteral_11801/*"SCRIPT"*/);
    sub_B775C4(&StringLiteral_1818/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AA15 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_58;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                  assetResourceDic,
                                                                                                  (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetResourceDic )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v36,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v4 = 0;
  v37 = v36;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v37,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    if ( !v37.fields.currentValue )
      sub_B7769C(v5, v6);
    if ( !HIDWORD(v37.fields.currentValue[5].klass) && v37.fields.currentValue[4].monitor )
      v4 |= AssetData__ReleaseData((AssetData_o *)v37.fields.currentValue, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v37,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v4 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v7);
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
LABEL_58:
    sub_B7769C(assetResourceDic, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetResourceDic,
    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( *(float *)&this->fields.processingAssetLoaderList >= 0.0 )
  {
    v9 = *(float *)&this->fields.processingAssetLoaderList - UnityEngine_Time__get_deltaTime(0LL);
    *(float *)&this->fields.processingAssetLoaderList = v9;
    if ( v9 <= 0.0 && !LOBYTE(this->fields.writeRequestThread) )
    {
      Path = AssetStorageCache__GetPath(v8);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v12 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v12 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v12->static_fields->LIMIT_FREE_SIZE )
        {
          v32 = sub_B775C8(&System_IO_IOException_TypeInfo);
          v33 = (System_IO_IOException_o *)sub_B77694(v32);
          v34 = (System_String_o *)sub_B775C8(&StringLiteral_5459/*"Disk full"*/);
          System_IO_IOException___ctor_39536888(v33, v34, 0LL);
          v35 = sub_B775C8(&Method_AssetManager_LateUpdate__);
          sub_B77668(v33, v35);
        }
      }
      v13 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v13 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v13->static_fields->createCacheListFileName, 0LL) )
      {
        v14 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v14 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v14->static_fields->createCacheListFileName, 0LL);
      }
      v15 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v15 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v15->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v18 = (System_IO_StreamWriter_o *)sub_B77694(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_44952408(v18, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v18 )
        sub_B7769C(v19, v20);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._16_Write.method)(
        v18,
        *(_QWORD *)&this->fields.requestWriteCounter,
        v18->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v18->klass->vtable._8_Close.method)(
        v18,
        v18->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v21 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v21 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v21->static_fields->backCacheListFileName, 0LL);
      }
      v22 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v22 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v22->static_fields->cacheListFileName, 0LL) )
      {
        v23 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v23 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v23->static_fields->cacheListFileName, v23->static_fields->backCacheListFileName, 0LL);
      }
      v24 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v24 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v24->static_fields->createCacheListFileName, v24->static_fields->cacheListFileName, 0LL);
      v25 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v25, v26, v27, v28, v29, v30, v31);
      LODWORD(this->fields.processingAssetLoaderList) = -1082130432;
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
        AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetResource, 0LL);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w8

  v5 = this;
  if ( (byte_438AA27 & 1) == 0 )
  {
    sub_B775C4(&AssetData_TypeInfo);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    byte_438AA27 = 1;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                (System_Collections_Generic_Dictionary_string__AssetData__o *)v5->fields.requestConfigWriteData,
                name,
                v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v8 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v8 = (AssetData_o *)sub_B77694(AssetData_TypeInfo);
    AssetData___ctor(v8, 1, name, v9);
    if ( !v8 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v8, v11) )
      return 0LL;
    v12 = v8->fields.entryCount;
    if ( (v12 & 0x80000000) == 0 )
      v8->fields.entryCount = v12 + 1;
    requestConfigWriteData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.requestConfigWriteData;
    if ( !requestConfigWriteData )
LABEL_14:
      sub_B7769C(requestConfigWriteData, v11);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (System_Xml_Schema_XmlSchemaObject_o *)v8,
      (const MethodInfo_2F7D5F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v15; // x0
  AssetData_o *v16; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v18; // x3
  AssetData_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  AssetData_o *v22; // x22
  int32_t v23; // w8
  const MethodInfo *v24; // x1
  int32_t v25; // w8

  v8 = this;
  if ( (byte_438AA22 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_438AA22 = 1;
  }
  if ( !name )
  {
    LOBYTE(v19) = 0;
    return (char)v19;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                v8->fields.assetResourceDic,
                name,
                *(const MethodInfo **)&loadParallelMax);
  if ( AssetData )
  {
    v12 = AssetData;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_B7769C(0LL, v10);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      assetResourceDic,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2F7F064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    if ( v12->fields.objectList )
    {
      entryCount = v12->fields.entryCount;
      if ( (entryCount & 0x80000000) == 0 )
        v12->fields.entryCount = entryCount + 1;
      if ( !callbackFunc )
        goto LABEL_20;
      v15 = callbackFunc;
      v16 = v12;
      goto LABEL_11;
    }
  }
  Status = AssetManager__AddEntryLoadStatus(v8, 0, name, callbackFunc, v11);
  if ( Status )
    goto LABEL_20;
  v19 = AssetManager__GetAssetData((AssetManager_o *)Status, v8->fields.assetBundleReleaseDic, name, v18);
  if ( !v19 )
    return (char)v19;
  v22 = v19;
  if ( !v19->fields.objectList )
  {
LABEL_17:
    v23 = v22->fields.entryCount;
    if ( (v23 & 0x80000000) == 0 )
      v22->fields.entryCount = v23 + 1;
    AssetManager__AddLoadWaitStatus_24424576(v8, v22, callbackFunc, 0LL, v21);
    HIDWORD(v8->fields.unloadCallbacks) = loadParallelMax;
    AssetManager__LoadStart(v8, v24);
    goto LABEL_20;
  }
  if ( v19->fields.isLoadResources )
  {
    AssetData__ReleaseData(v19, v20);
    goto LABEL_17;
  }
  v25 = v19->fields.entryCount;
  if ( (v25 & 0x80000000) == 0 )
    v19->fields.entryCount = v25 + 1;
  if ( !callbackFunc )
    goto LABEL_20;
  v15 = callbackFunc;
  v16 = v22;
LABEL_11:
  AssetLoader_LoadEndDataHandler__Invoke(v15, v16, 0LL);
LABEL_20:
  LOBYTE(v19) = 1;
  return (char)v19;
}


bool __fastcall AssetManager__LoadAssetStorage_24409204(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AssetStorage; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  __int64 v34; // x8
  int v35; // w26
  unsigned __int64 v36; // x27
  AssetLoader_LoadEndDataHandler_o **v37; // x23
  bool v38; // w25
  System_String_o *v39; // x24
  AssetLoader_LoadEndDataHandler_o *v40; // x25
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x1
  __int64 v49; // x0

  if ( (byte_438AA24 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__);
    sub_B775C4(&AssetManager___c__DisplayClass168_0_TypeInfo);
    byte_438AA24 = 1;
  }
  v9 = sub_B77694(AssetManager___c__DisplayClass168_0_TypeInfo);
  AssetManager___c__DisplayClass168_0___ctor((AssetManager___c__DisplayClass168_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_32;
  *(_QWORD *)(v9 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 48),
    (System_Int32_array **)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_DWORD *)(v9 + 56) = loadParallelMax;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  v25 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v9 + 24);
  *(_QWORD *)(v9 + 24) = v24;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
  AssetStorage = *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v9 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v9 + 16) = 0,
        *(_BYTE *)(v9 + 32) = 0,
        !nameList) )
  {
LABEL_32:
    sub_B7769C(AssetStorage, v11);
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
      {
        v49 = sub_B776C8(AssetStorage);
        sub_B77668(v49, 0LL);
      }
      v39 = nameList->m_Items[v36];
      if ( !v39 )
      {
        AssetStorage = *v25;
        if ( !*v25 )
          goto LABEL_32;
        AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)AssetStorage,
                                                                                           0LL,
                                                                                           (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v38 )
        goto LABEL_22;
      v40 = *v37;
      if ( !*v37 )
      {
        v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__,
          0LL);
        *(_QWORD *)(v9 + 64) = v40;
        sub_B77560((BattleServantConfConponent_o *)(v9 + 64), (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
      }
      if ( !this )
        goto LABEL_32;
      AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)AssetManager__LoadAssetStorage(
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
      goto LABEL_32;
    AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                                                                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)AssetStorage,
                                                                                       (WarBoardManager_TaskList_o *)v39,
                                                                                       (const MethodInfo_3054348 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v11 = (unsigned int)AssetStorage;
      AssetStorage = *v25;
      if ( !*v25 )
        goto LABEL_32;
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)AssetStorage,
        v11,
        AssetStorage->fields._size - v11,
        (const MethodInfo_305502C *)Method_System_Collections_Generic_List_string__RemoveRange__);
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
    HIDWORD(this->fields.unloadCallbacks) = *(_DWORD *)(v9 + 56);
    *(_BYTE *)(v9 + 32) = 1;
    AssetManager__LoadStart(this, v47);
  }
  return v38;
}


bool __fastcall AssetManager__LoadAsset_24425216(
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
        AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetResource, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1
  struct System_String_o *errorMessage; // x8

  if ( (byte_438AA03 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438AA03 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance->fields.webViewBase) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      errorMessage = Instance->fields.errorMessage;
      if ( errorMessage )
        return SLODWORD(errorMessage[1].klass) > 0;
    }
LABEL_9:
    sub_B7769C(Instance, v2);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v18; // x0
  AssetData_o *v19; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v21; // x3
  AssetData_o *v22; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x24
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v25; // x8
  unsigned __int64 v26; // x27
  int max_length; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x23
  int32_t v30; // w9
  int size; // w8
  System_String_array *v32; // x0
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x1
  __int64 v35; // x0
  AssetData_o *v37; // [xsp+8h] [xbp-58h]

  if ( (byte_438AA23 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    byte_438AA23 = 1;
  }
  LOBYTE(v11) = 0;
  if ( name && resourceNames )
  {
    if ( *(_QWORD *)&resourceNames->max_length )
    {
      AssetData = AssetManager__GetAssetData(0LL, this->fields.assetResourceDic, name, (const MethodInfo *)callbackFunc);
      if ( AssetData )
      {
        v15 = AssetData;
        assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetResourceDic;
        if ( !assetResourceDic )
          goto LABEL_43;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
          assetResourceDic,
          (System_Xml_XmlQualifiedName_o *)name,
          (const MethodInfo_2F7F064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v15->fields.objectList )
        {
          entryCount = v15->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v15->fields.entryCount = entryCount + 1;
          if ( !callbackFunc )
            goto LABEL_39;
          v18 = callbackFunc;
          v19 = v15;
LABEL_13:
          AssetLoader_LoadEndDataHandler__Invoke(v18, v19, 0LL);
LABEL_39:
          LOBYTE(v11) = 1;
          return (char)v11;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v14);
      if ( Status )
        goto LABEL_39;
      v11 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v21);
      if ( v11 )
      {
        v22 = v11;
        v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v23,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
        objectList = v22->fields.objectList;
        if ( objectList )
        {
          v25 = *(_QWORD *)&resourceNames->max_length;
          v37 = v22;
          if ( (int)v25 >= 1 )
          {
            v26 = 0LL;
            while ( 1 )
            {
              if ( v26 >= (unsigned int)v25 )
                goto LABEL_44;
              max_length = objectList->max_length;
              v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)resourceNames->m_Items[v26];
              if ( max_length >= 1 )
                break;
LABEL_27:
              if ( !v23 )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v23,
                v28,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_29:
              LODWORD(v25) = resourceNames->max_length;
              if ( (__int64)++v26 >= (int)v25 )
                goto LABEL_30;
            }
            v29 = 0LL;
            while ( (unsigned int)v29 < max_length )
            {
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)objectList->m_Items[v29];
              if ( !assetResourceDic )
                goto LABEL_43;
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)assetResourceDic, 0LL);
              if ( !v28 )
                goto LABEL_43;
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_String__Equals_44889276((System_String_o *)v28, (System_String_o *)assetResourceDic, 0LL);
              if ( ((unsigned __int8)assetResourceDic & 1) != 0 )
                goto LABEL_29;
              max_length = objectList->max_length;
              if ( (int)++v29 >= max_length )
                goto LABEL_27;
            }
LABEL_44:
            v35 = sub_B776C8(assetResourceDic);
            sub_B77668(v35, 0LL);
          }
LABEL_30:
          v22 = v37;
          if ( !v23 )
LABEL_43:
            sub_B7769C(assetResourceDic, v13);
        }
        else
        {
          if ( !v23 )
            goto LABEL_43;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v30 = v22->fields.entryCount;
        size = v23->fields._size;
        if ( (v30 & 0x80000000) == 0 )
          v22->fields.entryCount = v30 + 1;
        if ( size >= 1 )
        {
          v32 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                         (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_24424576(this, v22, callbackFunc, v32, v33);
          HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
          AssetManager__LoadStart(this, v34);
          goto LABEL_39;
        }
        if ( !callbackFunc )
          goto LABEL_39;
        v18 = callbackFunc;
        v19 = v22;
        goto LABEL_13;
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
  int64_t downloadSize; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AssetManager_c *klass; // x8
  int64_t v15; // x8
  System_Int32_array **ProxyData___Dequeue; // x0
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *Name; // x0
  System_Action_o *v25; // x0
  System_Int32_array **v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  const MethodInfo *v41; // x2
  AssetLoader_LoadEndDataHandler_o *v42; // x1
  System_Action_o *v43; // x19
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438AA1D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_B775C4(&Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__);
    sub_B775C4(&AssetManager___c__DisplayClass147_0_TypeInfo);
    sub_B775C4(&StringLiteral_5374/*"DelayLoadStart"*/);
    byte_438AA1D = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v3 = sub_B77694(AssetManager___c__DisplayClass147_0_TypeInfo);
  AssetManager___c__DisplayClass147_0___ctor((AssetManager___c__DisplayClass147_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_42;
  *(_QWORD *)(v3 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4388A01 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4388A01 = 1;
  }
  downloadSize = (int64_t)NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    downloadSize = (int64_t)NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(downloadSize + 184) + 136LL) || BYTE1(this->fields.writeRequestThread) )
    return 0;
  if ( LOBYTE(this->fields.initCRW) )
  {
    downloadSize = this->fields.downloadSize;
    if ( !downloadSize )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v44,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)downloadSize,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_42;
  if ( SLODWORD(klass->_1.byval_arg.data) < 1 )
    return 0;
  v15 = this->fields.downloadSize;
  if ( !v15 )
    goto LABEL_42;
  if ( *(_DWORD *)(v15 + 24) >= SHIDWORD(this->fields.unloadCallbacks) )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5374/*"DelayLoadStart"*/,
    0LL);
  downloadSize = (int64_t)this[1].klass;
  if ( !downloadSize
    || (ProxyData___Dequeue = (System_Int32_array **)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                       (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)downloadSize,
                                                       (const MethodInfo_2F2329C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v3 + 24) = ProxyData___Dequeue,
        v17 = v3 + 24,
        sub_B77560((BattleServantConfConponent_o *)(v3 + 24), ProxyData___Dequeue, v18, v19, v20, v21, v22, v23),
        (downloadSize = *(_QWORD *)(v3 + 24)) == 0) )
  {
LABEL_42:
    sub_B7769C(downloadSize, v5);
  }
  Name = AssetManager_LoadWaitStatus__get_Name((AssetManager_LoadWaitStatus_o *)downloadSize, 0LL);
  downloadSize = System_String__IsNullOrEmpty(Name, 0LL);
  if ( (downloadSize & 1) == 0 )
  {
    downloadSize = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( downloadSize )
    {
      v26 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)downloadSize,
                                     (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v3 + 32) = v26;
      v27 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v3 + 32);
      sub_B77560((BattleServantConfConponent_o *)(v3 + 32), v26, v28, v29, v30, v31, v32, v33);
      downloadSize = this->fields.downloadSize;
      if ( downloadSize )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadSize,
          *v27,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AssetLoader__Add__);
        if ( *(_QWORD *)v17 )
        {
          downloadSize = (int64_t)*v27;
          if ( *v27 )
          {
            v40 = *(System_Int32_array ***)(*(_QWORD *)v17 + 16LL);
            *(_QWORD *)(downloadSize + 24) = v40;
            sub_B77560((BattleServantConfConponent_o *)(downloadSize + 24), v40, v34, v35, v36, v37, v38, v39);
            if ( *(_QWORD *)v17 )
            {
              downloadSize = (int64_t)*v27;
              if ( *v27 )
              {
                v42 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v17 + 32LL);
                if ( v42 )
                  AssetLoader__add_endCallback2((AssetLoader_o *)downloadSize, v42, v41);
                v43 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                System_Action___ctor(
                  v43,
                  (Il2CppObject *)v3,
                  Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__,
                  0LL);
                if ( v43 )
                {
                  System_Action__Invoke(v43, 0LL);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_42;
  }
  if ( !*(_QWORD *)v17 )
    goto LABEL_42;
  v25 = *(System_Action_o **)(*(_QWORD *)v17 + 24LL);
  if ( v25 )
    System_Action__Invoke(v25, 0LL);
  return AssetManager__LoadStart(this, v5);
}


void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  ManagementManager_c *v5; // x0
  ManagementManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_438AA11 & 1) == 0 )
  {
    sub_B775C4(&ManagementManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_438AA11 = 1;
  }
  if ( isDecide )
  {
    LOBYTE(this->fields.writeRequestThread) = 0;
  }
  else
  {
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    if ( !byte_4388A00 )
    {
      sub_B775C4(&ManagementManager_TypeInfo);
      byte_4388A00 = 1;
    }
    v5 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v5 = ManagementManager_TypeInfo;
    }
    if ( v5->static_fields->isDuringStartup )
    {
      UnityEngine_Application__Quit_41389268(0LL);
    }
    else
    {
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B7769C(0LL, v7);
      ManagementManager__reboot(Instance, 0, 0LL);
    }
  }
}


void __fastcall AssetManager__OnClickWaitDebugDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  LOBYTE(this->fields.writeRequestThread) = 0;
}


void __fastcall AssetManager__OnEndLoadAssetStorage(
        AssetManager_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x19
  int64_t downloadSize; // x22
  _BOOL4 isRequestDownload; // w23
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_438AA1F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AA1F = 1;
  }
  if ( !loader )
    goto LABEL_14;
  downloadSize = v4->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_14;
  isRequestDownload = loader->fields.isRequestDownload;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v7 >= *(int *)(downloadSize + 24) )
      goto LABEL_18;
    if ( v7 >= *(unsigned int *)(downloadSize + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v7 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(v8, (UnityEngine_Object_o *)loader, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    downloadSize = v4->fields.downloadSize;
    ++v7;
    if ( !downloadSize )
      goto LABEL_14;
  }
  data = loader->fields.data;
  if ( !data
    || (this = (AssetManager_o *)v4->fields.downloadSize,
        *(_QWORD *)&v4->fields.isErrorDialog -= data->fields.size,
        !this) )
  {
LABEL_14:
    sub_B7769C(this, loader);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    v7,
    (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
LABEL_18:
  if ( isRequestDownload )
  {
    if ( *(_QWORD *)&v4->fields.reserveWriteRequest )
      LOBYTE(v4->fields.unloadCallbacks) = 1;
    else
      AssetManager__StartThreadConfigWriteRequest(v4, (const MethodInfo *)loader);
  }
  AssetManager__LoadStart(v4, (const MethodInfo *)loader);
}


void __fastcall AssetManager__PauseDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( !BYTE1(this->fields.writeRequestThread) )
    BYTE1(this->fields.writeRequestThread) = 1;
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
  struct System_String_o *requestConfigWriteData; // x0

  if ( (byte_438AA20 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_438AA20 = 1;
  }
  Asset = AssetManager__GetAsset(this, type, name, method);
  if ( Asset )
  {
    v9 = Asset;
    v10 = AssetData__RemoveEntry(Asset, v8);
    if ( type == 1 && v10 )
    {
      requestConfigWriteData = this->fields.requestConfigWriteData;
      if ( !requestConfigWriteData )
        sub_B7769C(0LL, v11);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)requestConfigWriteData,
        (System_Xml_XmlQualifiedName_o *)v9->fields.name,
        (const MethodInfo_2F7F064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0

  v5 = this;
  if ( (byte_438AA28 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_438AA28 = 1;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                (System_Collections_Generic_Dictionary_string__AssetData__o *)v5->fields.requestConfigWriteData,
                name,
                v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    requestConfigWriteData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.requestConfigWriteData;
    if ( !requestConfigWriteData )
      sub_B7769C(0LL, v8);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2F7F064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntry(AssetData, v5);
}


void __fastcall AssetManager__ReleaseAssetStorage_24411216(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( !nameList )
    sub_B7769C(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B776C8(this);
        sub_B77668(v7, 0LL);
      }
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall AssetManager__ReleaseAsset_24402340(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x0

  if ( !nameList )
    sub_B7769C(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
      {
        v9 = sub_B776C8(this);
        sub_B77668(v9, 0LL);
      }
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_24402660(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_24402860(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8
  __int64 v9; // x0

  if ( !assetInfoList )
    sub_B7769C(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
      {
        v9 = sub_B776C8(this);
        sub_B77668(v9, 0LL);
      }
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
  if ( (byte_438AA1C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    this = (AssetManager_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_438AA1C = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && info->fields.objectList )
  {
    this = (AssetManager_o *)v4->fields.assetResourceDic;
    if ( !this )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
            (System_Xml_XmlQualifiedName_o *)info->fields.name,
            (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetResourceDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)info->fields.name,
          (System_Xml_Schema_XmlSchemaObject_o *)info,
          (const MethodInfo_2F7D5F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_B7769C(this, info);
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
  if ( !BYTE3(this->fields.writeRequestThread) )
  {
    BYTE3(this->fields.writeRequestThread) = 1;
    v4 = AssetManager__coUnloadUnusedAssets(this, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall AssetManager__ResetAssetStorageVersion(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x8
  System_String_o *v8; // x19
  Il2CppObject *currentValue; // x21
  System_String_o *monitor; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438AA0D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438AA0D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_44901936(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_892/*"/"*/,
                                                                                      0LL);
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (v8 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                    (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_B7769C(Values, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    Values,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v13,
            (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v11 )
      break;
    currentValue = v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B7769C(v11, v12);
    monitor = (System_String_o *)v13.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B7769C(0LL, v12);
    if ( System_String__StartsWith(monitor, v8, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void __fastcall AssetManager__ResumeDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( BYTE1(this->fields.writeRequestThread) )
  {
    BYTE1(this->fields.writeRequestThread) = 0;
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

  if ( (byte_438A9D2 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438A9D2 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseStandaloneAsset )
  {
    v2 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_438A9D3 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438A9D3 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseStandaloneAsset )
    return 0;
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v2->static_fields->SAVE_KEY, v2->static_fields->SAVE_DATA_OFFLINE, 0LL);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL) )
    return 0;
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438AA05 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_438AA05 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B7769C(assetBundleReleaseDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v7,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields.currentValue )
      sub_B7769C(v4, v5);
    if ( LODWORD(v7.fields.currentValue[2].monitor) != HIDWORD(v7.fields.currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_24414504(this, (AssetData_o *)v7.fields.currentValue, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v7,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void __fastcall AssetManager__StartConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  if ( *(_QWORD *)&this->fields.reserveWriteRequest )
    LOBYTE(this->fields.unloadCallbacks) = 1;
  else
    AssetManager__StartThreadConfigWriteRequest(this, method);
}


void __fastcall AssetManager__StartThreadConfigWriteRequest(AssetManager_o *this, const MethodInfo *method)
{
  System_Threading_ThreadStart_o *v3; // x20
  System_Threading_Thread_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  System_Threading_Thread_o *v12; // x0

  if ( (byte_438AA13 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetManager_ConfigWriteRequestThread__);
    sub_B775C4(&System_Threading_ThreadStart_TypeInfo);
    sub_B775C4(&System_Threading_Thread_TypeInfo);
    byte_438AA13 = 1;
  }
  LOBYTE(this->fields.unloadCallbacks) = 0;
  v3 = (System_Threading_ThreadStart_o *)sub_B77694(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v3, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v4 = (System_Threading_Thread_o *)sub_B77694(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v4, v3, 0LL);
  *(_QWORD *)&this->fields.reserveWriteRequest = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.reserveWriteRequest,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = *(System_Threading_Thread_o **)&this->fields.reserveWriteRequest;
  if ( !v12 )
    sub_B7769C(0LL, v11);
  System_Threading_Thread__Start(v12, 0LL);
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
        const MethodInfo_1C60178 *method)
{
  AssetData_o *AssetStorage; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  Il2CppObject *v15; // x1
  Il2CppObject *v16; // x19

  if ( (byte_438D93B & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D93B = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    v15 = (Il2CppObject *)((__int64 (__fastcall *)(AssetData_o *, System_String_o *))method->rgctx_data->_0_AssetData_GetObject_T_->methodPointer)(
                            AssetStorage,
                            name);
  else
    v15 = 0LL;
  *data = v15;
  sub_B77560((BattleServantConfConponent_o *)data, (System_Int32_array **)v15, v9, v10, v11, v12, v13, v14);
  v16 = *data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
}


bool __fastcall AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x19

  if ( (byte_438AA29 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AA29 = 1;
  }
  *atlas = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)atlas,
    0LL,
    (System_String_array **)atlasName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v11);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               AssetStorage,
                                                               atlasName,
                                                               (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  else
    Object_WarBoardWaitTimeSetting = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  if ( v14 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B7769C(v14, v15);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)atlas,
      (System_Int32_array **)Component_srcLineSprite,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (UnityEngine_Object_o *)*atlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__UpdateLoadParallelMax(AssetManager_o *this, int32_t value, const MethodInfo *method)
{
  HIDWORD(this->fields.unloadCallbacks) = value;
  AssetManager__LoadStart(this, *(const MethodInfo **)&value);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__WaitForExecutionUnloadUnuseAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438A9D0 & 1) == 0 )
  {
    sub_B775C4(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
    byte_438A9D0 = 1;
  }
  v3 = sub_B77694(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
    (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__117_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  int64_t downloadSize; // x8

  v2 = this;
  if ( (byte_438AA2D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (AssetManager_o *)sub_B775C4(&StringLiteral_9522/*"NOW_LOADING"*/);
    byte_438AA2D = 1;
  }
  downloadSize = v2->fields.downloadSize;
  if ( !downloadSize )
    sub_B7769C(this, method);
  if ( *(int *)(downloadSize + 24) >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm((System_String_o *)StringLiteral_9522/*"NOW_LOADING"*/, 0LL);
  }
}


void __fastcall AssetManager__add_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x20
  System_Delegate_o *v6; // x21
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetManager_o *v11; // x0
  AssetManager_ResourceUnloadEventHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438A9CE & 1) == 0 )
  {
    sub_B775C4(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_438A9CE = 1;
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  v6 = (System_Delegate_o *)downLoadWaitList;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_downLoadWaitList, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AssetManager_o *)sub_B77990(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_438A9F1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F1 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7769C(v2, v3);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438AA14 & 1) == 0 )
  {
    sub_B775C4(&AssetManager__coUnloadUnusedAssets_d__137_TypeInfo);
    byte_438AA14 = 1;
  }
  v3 = sub_B77694(AssetManager__coUnloadUnusedAssets_d__137_TypeInfo);
  AssetManager__coUnloadUnusedAssets_d__137___ctor((AssetManager__coUnloadUnusedAssets_d__137_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall AssetManager__compAssetStorage(
        System_String_o *name1,
        System_String_o *name2,
        const MethodInfo *method)
{
  int32_t m_stringLength; // w8

  if ( name1 )
  {
    if ( name2 )
      return System_String__Equals_44889276(name1, name2, 0LL);
    m_stringLength = name1->fields.m_stringLength;
    return m_stringLength == 0;
  }
  if ( name2 )
  {
    m_stringLength = name2->fields.m_stringLength;
    return m_stringLength == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList(
        System_String_array *list1,
        System_String_array *list2,
        const MethodInfo *method)
{
  __int64 v4; // x8
  System_String_array *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  System_String_o *v8; // x1
  __int64 v9; // x0

  if ( list1 && (v4 = *(_QWORD *)&list1->max_length, v5 = list1, v4) )
  {
    if ( !list2 || (_DWORD)v4 != list2->max_length )
      return 0;
    if ( (int)v4 >= 1 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = 0LL;
        v7 = (int)v4;
        do
        {
          if ( v6 >= list2->max_length )
            break;
          list1 = (System_String_array *)v5->m_Items[v6];
          v8 = list2->m_Items[v6];
          if ( list1 )
          {
            if ( !v8 )
              return 0;
            list1 = (System_String_array *)System_String__Equals_44889276((System_String_o *)list1, v8, 0LL);
            if ( ((unsigned __int8)list1 & 1) == 0 )
              return 0;
          }
          else if ( v8 )
          {
            return 0;
          }
          if ( (__int64)++v6 >= v7 )
            return 1;
        }
        while ( v6 < v5->max_length );
      }
      v9 = sub_B776C8(list1);
      sub_B77668(v9, 0LL);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_24400332(
        AssetData_array *assetList,
        System_String_array *list,
        const MethodInfo *method)
{
  __int64 v4; // x8
  AssetData_array *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  AssetData_o *v8; // x8
  System_String_o *v9; // x1
  System_String_o *name; // x0
  __int64 v11; // x0

  if ( assetList && (v4 = *(_QWORD *)&assetList->max_length, v5 = assetList, v4) )
  {
    if ( !list || (_DWORD)v4 != list->max_length )
      return 0;
    if ( (int)v4 >= 1 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = 0LL;
        v7 = (int)v4;
        do
        {
          if ( v6 >= list->max_length )
            break;
          v8 = v5->m_Items[v6];
          v9 = list->m_Items[v6];
          if ( v8 )
          {
            if ( !v9 )
              return 0;
            name = v8->fields.name;
            if ( !name )
              sub_B7769C(0LL, v9);
            assetList = (AssetData_array *)System_String__Equals_44889276(name, v9, 0LL);
            if ( ((unsigned __int8)assetList & 1) == 0 )
              return 0;
          }
          else if ( v9 )
          {
            return 0;
          }
          if ( (__int64)++v6 >= v7 )
            return 1;
        }
        while ( v6 < v5->max_length );
      }
      v11 = sub_B776C8(assetList);
      sub_B77668(v11, 0LL);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_24400052(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t m_stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_44889276(v3, name, 0LL);
    m_stringLength = v3->fields.m_stringLength;
  }
  else
  {
    if ( !name )
      return 1;
    m_stringLength = name->fields.m_stringLength;
  }
  return m_stringLength == 0;
}


void __fastcall AssetManager__debugLog(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_438A9D6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9D6 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7769C(v2, v3);
    AssetManager__DebugLog((AssetManager_o *)Instance, v3);
  }
}


bool __fastcall AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_438A9F4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F4 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_B7769C(v8, v9);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__downloadAssetStorage_24407060(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_438A9F5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_B7769C(v6, v7);
  return AssetManager__DownloadAssetStorage_24407264((AssetManager_o *)Instance, nameList, callbackFunc, 1, v8);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438A9E3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
    return 0LL;
  if ( !Instance )
    sub_B7769C(v6, v7);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v8);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_438AA00 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438AA00 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_B7769C(0LL, v4);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.callbackFunc,
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
  WebViewManager_o *Instance; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_438A9FA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9FA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_B7769C(0LL, v4);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
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


System_String_array *__fastcall AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9EF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9EF = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_B7769C(v4, v5);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v6);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_24410204(
        System_String_array *nameList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9FB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9FB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_B7769C(v4, v5);
  return AssetManager__GetAssetStorage_24410384((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__getAssetStorage_24410672(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438A9FC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9FC = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_B7769C(v6, v7);
  return AssetManager__GetAssetStorage_24410872((AssetManager_o *)Instance, name, callbackFunc, v8);
}


bool __fastcall AssetManager__getAsset_24401120(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_438A9E4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E4 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_B7769C(v8, v9);
  return AssetManager__GetAsset_24401328((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


bool __fastcall AssetManager__getAsset_24401428(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438A9E5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_B7769C(v6, v7);
  return AssetManager__GetAsset_24401628((AssetManager_o *)Instance, name, callbackFunc, v8);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_438A9EA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9EA = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v2 )
    return 0LL;
  if ( !Instance )
    sub_B7769C(v2, v3);
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
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  __int64 v13; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438A9E0 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&System_Text_UTF8Encoding_TypeInfo);
    sub_B775C4(&StringLiteral_23968/*"{0,0:x2}"*/);
    sub_B775C4(&StringLiteral_849/*".bin"*/);
    byte_438A9E0 = 1;
  }
  v3 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B77694(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v3, 0LL);
  v4 = (System_Text_UTF8Encoding_o *)sub_B77694(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v4->klass->vtable._18_GetBytes.method)(
                                              v4,
                                              name,
                                              v4->klass->vtable._19_GetBytes.methodPtr);
  if ( !v3 )
    goto LABEL_13;
  v7 = System_Security_Cryptography_HashAlgorithm__ComputeHash_44413968(
         (System_Security_Cryptography_HashAlgorithm_o *)v3,
         (System_Byte_array *)appended,
         0LL);
  v8 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v8, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v3, 0LL);
  if ( !v7 )
    goto LABEL_13;
  v10 = *(_QWORD *)&v7->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v13 = sub_B776C8(appended);
        sub_B77668(v13, 0LL);
      }
      v14 = v7->m_Items[v11 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9);
      if ( !v8 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v8,
                   (System_String_o *)StringLiteral_23968/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v10) = v7->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_11;
    }
LABEL_13:
    sub_B7769C(appended, v6);
  }
LABEL_11:
  if ( !v8 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_42951964(v8, (System_String_o *)StringLiteral_849/*".bin"*/, 0LL);
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
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438A9DF & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_1564/*"?t="*/);
    sub_B775C4(&StringLiteral_20445/*"jar:"*/);
    byte_438A9DF = 1;
  }
  v8 = 0LL;
  v3 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !url )
    sub_B7769C(v3, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    v5 = System_String__Concat_44901936((System_String_o *)StringLiteral_20445/*"jar:"*/, v4->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v5, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v8 = NetworkManager__getTime(0LL) / 300;
      v6 = System_Int64__ToString((int64_t)&v8, 0LL);
      return System_String__Concat_44904220(url, (System_String_o *)StringLiteral_1564/*"?t="*/, v6, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_24378960(AssetData_o *data, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *DataServerAddress; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x20
  System_String_o *DownloadName; // x0
  System_Int32_array **v8; // x21
  NetworkManager_c *v9; // x0
  System_String_o *v10; // x0
  System_String_array *v11; // x20
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **assetBundleDateVersion; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x19
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438A9E1 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_20445/*"jar:"*/);
    sub_B775C4(&StringLiteral_1565/*"?v="*/);
    byte_438A9E1 = 1;
  }
  v78 = 0LL;
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v3);
  if ( !data )
    goto LABEL_56;
  v6 = DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v5);
  DataServerAddress = System_String__Concat_44901936(v6, DownloadName, 0LL);
  v8 = (System_Int32_array **)DataServerAddress;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !v8 )
    goto LABEL_56;
  if ( !System_String__StartsWith((System_String_o *)v8, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v9 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    v10 = System_String__Concat_44901936(
            (System_String_o *)StringLiteral_20445/*"jar:"*/,
            v9->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith((System_String_o *)v8, v10, 0LL) )
    {
      DataServerAddress = (System_String_o *)sub_B775DC(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v11 = (System_String_array *)DataServerAddress;
        v12 = (System_Int32_array **)sub_B77684(v8, DataServerAddress->klass->_1.element_class);
        if ( !v12 )
          goto LABEL_58;
        if ( !v11->max_length )
          goto LABEL_57;
        v11->m_Items[0] = (System_String_o *)v8;
        sub_B77560((BattleServantConfConponent_o *)v11->m_Items, v8, v13, v14, v15, v16, v17, v18);
        v12 = (System_Int32_array **)StringLiteral_1565/*"?v="*/;
        if ( StringLiteral_1565/*"?v="*/ )
        {
          v12 = (System_Int32_array **)sub_B77684(StringLiteral_1565/*"?v="*/, v11->obj.klass->_1.element_class);
          if ( !v12 )
            goto LABEL_58;
          v25 = (System_Int32_array **)StringLiteral_1565/*"?v="*/;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v11->max_length <= 1 )
          goto LABEL_57;
        v11->m_Items[1] = (System_String_o *)v25;
        sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
        v12 = (System_Int32_array **)AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v12 = (System_Int32_array **)AssetManager_TypeInfo;
        }
        v32 = *(System_Int32_array ***)&v12[23]->m_Items[13];
        if ( !v32 || (v12 = (System_Int32_array **)sub_B77684(v32, v11->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v11->max_length <= 2 )
            goto LABEL_57;
          v11->m_Items[2] = (System_String_o *)v32;
          sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
          v12 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
          if ( StringLiteral_16197/*"_"*/ )
          {
            v12 = (System_Int32_array **)sub_B77684(StringLiteral_16197/*"_"*/, v11->obj.klass->_1.element_class);
            if ( !v12 )
              goto LABEL_58;
            v39 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
          }
          else
          {
            v39 = 0LL;
          }
          if ( v11->max_length <= 3 )
            goto LABEL_57;
          v11->m_Items[3] = (System_String_o *)v39;
          sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[3], v39, v33, v34, v35, v36, v37, v38);
          assetBundleDateVersion = (System_Int32_array **)AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
          if ( !assetBundleDateVersion
            || (v12 = (System_Int32_array **)sub_B77684(assetBundleDateVersion, v11->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v11->max_length <= 4 )
              goto LABEL_57;
            v11->m_Items[4] = (System_String_o *)assetBundleDateVersion;
            sub_B77560(
              (BattleServantConfConponent_o *)&v11->m_Items[4],
              assetBundleDateVersion,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            v12 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
            if ( StringLiteral_16197/*"_"*/ )
            {
              v12 = (System_Int32_array **)sub_B77684(StringLiteral_16197/*"_"*/, v11->obj.klass->_1.element_class);
              if ( !v12 )
                goto LABEL_58;
              v53 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
            }
            else
            {
              v53 = 0LL;
            }
            if ( v11->max_length <= 5 )
              goto LABEL_57;
            v11->m_Items[5] = (System_String_o *)v53;
            sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[5], v53, v47, v48, v49, v50, v51, v52);
            HIDWORD(v78) = data->fields.size;
            v12 = (System_Int32_array **)System_Int32__ToString((int32_t)&v78 + 4, 0LL);
            v60 = v12;
            if ( !v12 || (v12 = (System_Int32_array **)sub_B77684(v12, v11->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v11->max_length <= 6 )
                goto LABEL_57;
              v11->m_Items[6] = (System_String_o *)v60;
              sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[6], v60, v54, v55, v56, v57, v58, v59);
              v12 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
              if ( StringLiteral_16197/*"_"*/ )
              {
                v12 = (System_Int32_array **)sub_B77684(StringLiteral_16197/*"_"*/, v11->obj.klass->_1.element_class);
                if ( !v12 )
                  goto LABEL_58;
                v67 = (System_Int32_array **)StringLiteral_16197/*"_"*/;
              }
              else
              {
                v67 = 0LL;
              }
              if ( v11->max_length <= 7 )
                goto LABEL_57;
              v11->m_Items[7] = (System_String_o *)v67;
              sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[7], v67, v61, v62, v63, v64, v65, v66);
              LODWORD(v78) = data->fields.crc;
              v12 = (System_Int32_array **)System_UInt32__ToString((uint32_t)&v78, 0LL);
              v74 = v12;
              if ( !v12 || (v12 = (System_Int32_array **)sub_B77684(v12, v11->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v11->max_length > 8 )
                {
                  v11->m_Items[8] = (System_String_o *)v74;
                  sub_B77560((BattleServantConfConponent_o *)&v11->m_Items[8], v74, v68, v69, v70, v71, v72, v73);
                  return System_String__Concat_44982964(v11, 0LL);
                }
LABEL_57:
                v76 = sub_B776C8(v12);
                sub_B77668(v76, 0LL);
              }
            }
          }
        }
LABEL_58:
        v77 = sub_B776BC(v12);
        sub_B77668(v77, 0LL);
      }
LABEL_56:
      sub_B7769C(DataServerAddress, v5);
    }
  }
  return (System_String_o *)v8;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  System_String_o *Path; // x19
  AssetManager_c *v2; // x8

  if ( (byte_438A9DA & 1) == 0 )
  {
    method = (const MethodInfo *)sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9DA = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return System_String__Concat_44901936(Path, v2->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_438A9D8 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9D8 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_438A9D9 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438A9D9 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v1);
  return System_String__Concat_44901936(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_438A9D7 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A9D7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_438AB54 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438AB54 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerAddress;
}


bool __fastcall AssetManager__get_DispLog(AssetManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.initCRW;
}


bool __fastcall AssetManager__get_InProgressUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.writeRequestThread);
}


bool __fastcall AssetManager__get_IsOnline(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AssetManager_c *v3; // x0
  System_String_o *String; // x0

  if ( (byte_438A9D1 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438A9D1 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseStandaloneAsset )
    return 0;
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *currentValue; // x21
  int monitor; // w8
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438AA06 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_438AA06 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B7769C(assetBundleReleaseDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v13,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v6 )
      break;
    currentValue = v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B7769C(v6, v7);
    monitor = (int)v13.fields.currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v13.fields.currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v13.fields.currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v10 = 1;
      v11 = 4;
      goto LABEL_14;
    }
  }
  v10 = 0;
  v11 = 2;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return (v11 == 4) & v10;
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9EB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9EB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_B7769C(v4, v5);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v6);
}


bool __fastcall AssetManager__isExistAssetStorage_24403612(System_String_array *nameList, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9EC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9EC = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_B7769C(v4, v5);
  return AssetManager__IsExistAssetStorage_24403792((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_438A9ED & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9ED = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
  {
    LOBYTE(AssetData) = 0;
  }
  else
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v4,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
                  name,
                  v6);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_24404172(System_String_array *nameList, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9EE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9EE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_B7769C(v4, v5);
  return AssetManager__IsNeedDownload_24404352((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_438A9E2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_B7769C(v8, v9);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9FF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9FF = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_B7769C(v4, v5);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v6);
}


bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_438A9F6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F6 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_B7769C(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__loadAssetStorage_24408788(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_438A9F8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_B7769C(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__loadAssetStorage_24408996(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_438A9F9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F9 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_B7769C(v8, v9);
  return AssetManager__LoadAssetStorage_24409204(
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
  UnityEngine_Object_o *Instance; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_438A9F7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F7 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_B7769C(v10, v11);
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
  WebViewManager_o *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_438A9F2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7769C(v2, v3);
    if ( !BYTE1(Instance[1].monitor) )
      BYTE1(Instance[1].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438A9E6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E6 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_B7769C(v6, v7);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v8);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438AA01 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438AA01 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v6);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9FD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9FD = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v6);
  }
}


void __fastcall AssetManager__releaseAssetStorage_24411040(System_String_array *nameList, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9FE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9FE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    AssetManager__ReleaseAssetStorage_24411216((AssetManager_o *)Instance, nameList, v6);
  }
}


void __fastcall AssetManager__releaseAsset_24402144(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_438A9E7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E7 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_B7769C(v6, v7);
    AssetManager__ReleaseAsset_24402340((AssetManager_o *)Instance, type, nameList, v8);
  }
}


void __fastcall AssetManager__releaseAsset_24402476(AssetData_o *assetInfo, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_438A9E8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v6);
  }
}


void __fastcall AssetManager__releaseAsset_24402684(AssetData_array *assetInfoList, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9E9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9E9 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    AssetManager__ReleaseAsset_24402860((AssetManager_o *)Instance, assetInfoList, v6);
  }
}


void __fastcall AssetManager__remove_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x20
  System_Delegate_o *v6; // x21
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438A9CF & 1) == 0 )
  {
    sub_B775C4(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_438A9CF = 1;
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  v6 = (System_Delegate_o *)downLoadWaitList;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_downLoadWaitList, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AssetManager_o *)sub_B77990(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_438A9F0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B7769C(v4, v5);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v6);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_438A9F3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9F3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_B7769C(v2, v3);
    if ( BYTE1(Instance[1].monitor) )
    {
      BYTE1(Instance[1].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v3);
    }
  }
}


void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_438A9D5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438A9D5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !Instance && !v4 )
    sub_B7769C(v4, v5);
}


void __fastcall AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_23251876(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_23251928(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resourceNames,
    (System_Int32_array **)resourceNames,
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
  BattleServantConfConponent_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssetManager_LoadWaitStatus_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4389F3F & 1) == 0 )
  {
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4389F3F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (BattleServantConfConponent_o *)&this->fields.callbackFunc2;
  v7 = (System_Int32_array **)System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)AssetLoader_LoadEndDataHandler_TypeInfo )
  {
    v14 = (AssetManager_LoadWaitStatus_o *)sub_B77990(v7);
    AssetManager_LoadWaitStatus__get_Name(v14, v15);
  }
  else
  {
    p_callbackFunc2->klass = (BattleServantConfConponent_c *)v7;
    sub_B77560(p_callbackFunc2, v7, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, method);
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
    LOBYTE(data) = AssetData__IsSame_24382336(data, type, name, 0LL);
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

  if ( (byte_4389F40 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389F40 = 1;
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  AssetManager_ResourceUnloadEventHandler_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  AssetManager_ResourceUnloadEventHandler_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  AssetManager_ResourceUnloadEventHandler_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (AssetManager_ResourceUnloadEventHandler_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}


void __fastcall AssetManager__DelayLoadStart_d__148___ctor(
        AssetManager__DelayLoadStart_d__148_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DelayLoadStart_d__148__MoveNext(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
      sub_B7769C(0LL, method);
    AssetManager__LoadStart(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__148__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DelayLoadStart_d__148__System_Collections_IEnumerator_Reset(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_AssetManager__DelayLoadStart_d__148_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__148__System_Collections_IEnumerator_get_Current(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DelayLoadStart_d__148__System_IDisposable_Dispose(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117___ctor(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__MoveNext(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *currentValue; // x21
  BattleServantConfConponent_o *p__8__1; // x21
  _BOOL4 isDispLogo_5__2; // w8
  AssetManager_c *klass; // x8
  Il2CppObject *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *DownloadSizeString; // x0
  System_String_o *v21; // x23
  WebViewManager_o *Instance; // x0
  Il2CppObject *v23; // x26
  CommonUI_o *v24; // x24
  ErrorDialog_ClickDelegate_o *v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_WaitForEndOfFrame_o *v32; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  bool result; // w0
  CommonUI_o *v41; // x21
  System_Action_o *v42; // x22
  AvalonSceneManager_c *v43; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v45; // x20
  BattleServantConfConponent_o *v46; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v53; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v54; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4389F3B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__);
    sub_B775C4(&AssetManager___c__DisplayClass117_0_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B775C4(&StringLiteral_24324/*"データ更新"*/);
    sub_B775C4(&StringLiteral_9452/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/);
    sub_B775C4(&StringLiteral_288/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)sub_B775C4(&StringLiteral_9450/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/);
    byte_4389F3B = 1;
  }
  memset(&v54, 0, sizeof(v54));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_60;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_56:
    if ( _4__this )
    {
      HIDWORD(_4__this->fields.unloadCallbacks) = v2->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, 0LL);
      return 0;
    }
    goto LABEL_60;
  }
  if ( _1__state == 1 )
  {
    p__8__1 = (BattleServantConfConponent_o *)&v2->fields.__8__1;
    v2->fields.__1__state = -1;
LABEL_44:
    if ( !p__8__1->klass )
      goto LABEL_60;
    if ( !LOBYTE(p__8__1->klass->_1.name) )
    {
LABEL_48:
      v32 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v32, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_60;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_48;
    p__8__1->klass = 0LL;
    sub_B77560(p__8__1, 0LL, v26, v27, v28, v29, v30, v31);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)_4__this->fields.assetBundleReleaseDic;
  if ( !this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this,
                                                                                  (const MethodInfo_2F7D39C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_60;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v53,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_26BC9D0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v54,
           (const MethodInfo_27E4E64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (AssetData_o *)v54.fields.currentValue;
    if ( !v54.fields.currentValue )
      sub_B7769C(v5, v6);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v54.fields.currentValue, 0LL)
      || System_String__op_Equality(v2->fields.attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      AssetManager__AddLoadWaitStatus_24414504(_4__this, currentValue, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v54,
    (const MethodInfo_27E4E60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  klass = _4__this[1].klass;
  if ( !klass )
LABEL_60:
    sub_B7769C(this, method);
  if ( SLODWORD(klass->_1.byval_arg.data) >= 1 )
  {
    v11 = (Il2CppObject *)sub_B77694(AssetManager___c__DisplayClass117_0_TypeInfo);
    System_Object___ctor(v11, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass117_0_o *)v11;
    p__8__1 = (BattleServantConfConponent_o *)&v2->fields.__8__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v2->fields.__8__1,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !v2->fields.__8__1 )
      goto LABEL_60;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9452/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9452/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v18 = (System_String_o *)StringLiteral_24324/*"データ更新"*/;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9450/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v19 = (System_String_o *)StringLiteral_288/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSizeString = (Il2CppObject *)AssetManager__GetDownloadSizeString(_4__this, 0LL);
    v21 = System_String__Format(v19, DownloadSizeString, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = (Il2CppObject *)p__8__1->klass;
    v24 = (CommonUI_o *)Instance;
    v25 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v25,
      v23,
      Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v24 )
      goto LABEL_60;
    CommonUI__OpenDataUpdateDialog(v24, v18, v21, v25, 0, 0LL);
    goto LABEL_44;
  }
LABEL_50:
  v2->fields._isDispLogo_5__2 = 0;
  v41 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__,
    0LL);
  if ( !v41 )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)CommonUI__PlayLogo(v41, v42, 0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_56;
  v43 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v43 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
  v45 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v45, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v45;
  v46 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B77560(v46, (System_Int32_array **)v45, v47, v48, v49, v50, v51, v52);
  *(_DWORD *)&v46[-1].fields.isOpenAfter = 2;
  return 1;
}


Il2CppObject *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_Collections_IEnumerator_Reset(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_Collections_IEnumerator_get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_IDisposable_Dispose(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__InitCR_d__130___ctor(
        AssetManager__InitCR_d__130_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__InitCR_d__130__MoveNext(AssetManager__InitCR_d__130_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetManager__InitCR_d__130_o *v8; // x19
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v10; // x0
  AssetManager_c *v11; // x0
  AssetManager_c *v12; // x0
  AssetManager_c *v13; // x0
  System_String_o *AllText; // x21
  System_String_o *v15; // x0
  AssetManager__InitCR_d__130_o **v16; // x21
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool result; // w0
  System_String_o *v26; // x21
  System_Char_array *v27; // x0
  System_String_o *v28; // x21
  System_Char_array *v29; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w23
  __int64 *v38; // x8
  System_String_o *v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x22
  System_String_o *v42; // x22
  System_String_o *v43; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v45; // x1
  System_Byte_array *v46; // x23
  uint32_t v47; // w23
  System_Char_array *v48; // x0
  il2cpp_array_size_t v49; // w8
  AssetManager__InitCR_d__130_o *v50; // x28
  Il2CppObject *_2__current; // x8
  System_String_o *v52; // x21
  AssetManager__InitCR_d__130_o *v53; // x22
  System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  AssetManager_c *v61; // x8
  System_Int32_array **v62; // x23
  struct AssetManager_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  AssetManager_c *v70; // x0
  System_Int32_array ***p_configFileUrl_5__2; // x8
  System_Int32_array **v72; // x23
  struct AssetManager_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  AssetManager_c *v80; // x0
  System_Int32_array ***p_loader_5__3; // x8
  System_Int32_array **v82; // x22
  struct AssetManager_StaticFields *v83; // x0
  int v84; // w8
  __int64 v85; // x23
  System_String_o *v86; // x21
  AssetManager__InitCR_d__130_o *v87; // x22
  System_String_o *v88; // x0
  int32_t v89; // w21
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v91; // x0
  int32_t v92; // w25
  System_String_o *v93; // x0
  int v94; // w8
  System_String_o *wait_5__6; // x26
  uint32_t v96; // w27
  int32_t v97; // w24
  System_String_o *v98; // x28
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x22
  AssetData_o *v100; // x21
  System_String_o *v101; // x21
  AssetManager_c *v102; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  System_Int32_array **v104; // x1
  System_Int32_array **v105; // x1
  struct AssetManager_StaticFields *v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  struct AssetManager_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  ManagerConfig_c *v121; // x0
  struct ManagerConfig_StaticFields *v122; // x8
  CommonUI_o *Instance; // x22
  ErrorDialog_ClickDelegate_o *v124; // x23
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x0
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_o *v143; // x21
  System_String_o *UrlString; // x0
  System_Int32_array **v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v153; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v155; // x22
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v164; // s8
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  float v171; // s0
  bool v172; // zf
  float v173; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v176; // x22
  System_String_o *v177; // x22
  System_String_o *v178; // x0
  System_String_o *v179; // x0
  Il2CppObject *v180; // x22
  ManagerConfig_c *v181; // x0
  struct ManagerConfig_StaticFields *v182; // x8
  System_Int32_array **v183; // x1
  System_String_o *v184; // x22
  int v185; // w8
  int32_t v186; // w0
  int32_t v187; // w24
  System_String_o *v188; // x23
  System_String_o *v189; // x22
  System_Byte_array *v190; // x24
  uint32_t v191; // w24
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  int v204; // w8
  System_String_array *v205; // x28
  AssetDataListInfo_o *v206; // x22
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  int v213; // w8
  unsigned int v214; // w25
  System_String_o *v215; // x22
  AssetManager__InitCR_d__130_o *v216; // x27
  char v217; // w8
  System_String_o *v218; // x0
  int v219; // w9
  void **v220; // x11
  AssetManager_c *v221; // x8
  System_String_o *v222; // x26
  bool v223; // cc
  System_Int32_array ***v224; // x9
  System_Int32_array ***v225; // x10
  System_Int32_array **v226; // x24
  System_Int32_array **v227; // x23
  System_String_o *v228; // x22
  System_String_o *v229; // x0
  int32_t v230; // w22
  System_String_o *v231; // x24
  System_String_o *v232; // x0
  int32_t v233; // w26
  System_String_o *v234; // x0
  int v235; // w8
  System_String_o *v236; // x23
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  AssetData_o *AssetData; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v256; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fields; // x27
  System_String_o *v258; // x26
  int32_t v259; // w24
  AssetData_o *v260; // x22
  Il2CppObject *v261; // x22
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  ManagerConfig_c *v268; // x0
  struct ManagerConfig_StaticFields *v269; // x8
  CommonUI_o *v270; // x21
  ErrorDialog_ClickDelegate_o *v271; // x23
  UnityEngine_WaitForEndOfFrame_o *v272; // x20
  BattleServantConfConponent_o *v273; // x19
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  int v280; // w8
  ManagementManager_c *v281; // x0
  _BOOL4 isDuringStartup; // w22
  CommonUI_o *v283; // x21
  System_String_o *v284; // x22
  ErrorDialog_ClickDelegate_o *v285; // x23
  System_String_o *v286; // x22
  ErrorDialog_ClickDelegate_o *v287; // x23
  UnityEngine_WaitForEndOfFrame_o *v288; // x20
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  UnityEngine_WaitForSeconds_o *v295; // x20
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  AssetManager_c *v302; // x0
  System_Int32_array **klass; // x23
  struct AssetManager_StaticFields *v304; // x0
  struct AssetManager_StaticFields *v305; // x0
  System_Int32_array **v306; // x1
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  struct AssetManager_StaticFields *v313; // x0
  System_Int32_array **v314; // x1
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  _BOOL8 v321; // x0
  __int64 v322; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v324; // x0
  __int64 v325; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v326; // x0
  BattleServantConfConponent_o *v327; // x19
  System_String_array **v328; // x2
  System_String_array **v329; // x3
  System_Boolean_array **v330; // x4
  System_Int32_array **v331; // x5
  System_Int32_array *v332; // x6
  System_Int32_array *v333; // x7
  UnityEngine_WaitForEndOfFrame_o *v334; // x20
  System_String_array **v335; // x2
  System_String_array **v336; // x3
  System_Boolean_array **v337; // x4
  System_Int32_array **v338; // x5
  System_Int32_array *v339; // x6
  System_Int32_array *v340; // x7
  __int64 v341; // x0
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-100h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-100h]
  int32_t size; // [xsp+24h] [xbp-DCh]
  System_String_o *keyType; // [xsp+28h] [xbp-D8h]
  uint32_t crc; // [xsp+34h] [xbp-CCh]
  BattleServantConfConponent_o *p_fields; // [xsp+38h] [xbp-C8h]
  BattleServantConfConponent_o *p_dateVersion; // [xsp+40h] [xbp-C0h]
  AssetManager__InitCR_d__130_o *v349; // [xsp+48h] [xbp-B8h]
  BattleServantConfConponent_o *p_buildVersion; // [xsp+48h] [xbp-B8h]
  System_String_o *attrib; // [xsp+50h] [xbp-B0h]
  System_String_o *attriba; // [xsp+50h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v353; // [xsp+58h] [xbp-A8h] BYREF
  int v354; // [xsp+78h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v355; // [xsp+80h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4389F3C & 1) == 0 )
  {
    sub_B775C4(&AssetDataListInfo_TypeInfo);
    sub_B775C4(&AssetData_TypeInfo);
    sub_B775C4(&Method_AssetManager_OnClickRetryDialog__);
    sub_B775C4(&Method_AssetManager_OnClickWaitDebugDialog__);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&CatAndMouseGame_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Crc32_TypeInfo);
    sub_B775C4(&UnityEngine_Debug_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ManagementManager_TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B775C4(&StringLiteral_2193/*"AssetStorageList download time over"*/);
    sub_B775C4(&StringLiteral_2189/*"AssetStorageList download crc error"*/);
    sub_B775C4(&StringLiteral_2185/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_B775C4(&StringLiteral_1817/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_B775C4(&StringLiteral_2181/*"AssetStorage boot load crc error : チェックサム値が不一致"*/);
    sub_B775C4(&StringLiteral_16036/*"[FFFF80]Download error for debug"*/);
    sub_B775C4(&StringLiteral_2190/*"AssetStorageList download data error"*/);
    sub_B775C4(&StringLiteral_2192/*"AssetStorageList download error : "*/);
    sub_B775C4(&StringLiteral_2183/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/);
    sub_B775C4(&StringLiteral_24186/*"~"*/);
    sub_B775C4(&StringLiteral_2184/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_B775C4(&StringLiteral_11801/*"SCRIPT"*/);
    sub_B775C4(&StringLiteral_1567/*"@"*/);
    sub_B775C4(&StringLiteral_1818/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    this = (AssetManager__InitCR_d__130_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389F3C = 1;
  }
  memset(&v355, 0, sizeof(v355));
  v354 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      v10 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v10 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v10->static_fields->cachePathName, 0LL) )
      {
        v11 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v11 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v11->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
      if ( !this )
        goto LABEL_314;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
             (const MethodInfo_2F7D1F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_136;
      }
      v12 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v12 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v12->static_fields->cacheListFileName, 0LL) )
        goto LABEL_136;
      v13 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v13 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v13->static_fields->cacheListFileName, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v15 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v26 = v15;
      if ( !v15 )
        goto LABEL_136;
      v27 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
      if ( !v27 )
        sub_B7769C(0LL, 0LL);
      if ( !v27->max_length )
      {
        v125 = sub_B776C8(v27);
        sub_B77668(v125, 0LL);
      }
      v27->m_Items[2] = -257;
      v28 = System_String__Trim(v26, v27, 0LL);
      v29 = (System_Char_array *)sub_B775DC(char___TypeInfo, 2LL);
      if ( !v29 )
        sub_B7769C(0LL, 0LL);
      max_length = v29->max_length;
      if ( !max_length )
      {
        v126 = sub_B776C8(v29);
        sub_B77668(v126, 0LL);
      }
      v29->m_Items[2] = 13;
      if ( max_length == 1 )
      {
        v127 = sub_B776C8(v29);
        sub_B77668(v127, 0LL);
      }
      v29->m_Items[3] = 10;
      if ( !v28 )
        sub_B7769C(v29, v29);
      v37 = System_String__IndexOfAny(v28, v29, 0LL);
      if ( v37 < 2 )
      {
        v38 = &StringLiteral_2184/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_109;
      }
      v39 = System_String__Substring_44965672(v28, 0, v37, 0LL);
      v41 = v39;
      if ( !v39 )
        sub_B7769C(0LL, v40);
      if ( !System_String__StartsWith(v39, (System_String_o *)StringLiteral_24186/*"~"*/, 0LL) )
      {
        v38 = &StringLiteral_2185/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_109;
      }
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v28, v37 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B7769C(0LL, v45);
      v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v47 = Crc32__Compute(v46, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) != v47 )
      {
        v38 = &StringLiteral_2181/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_109;
      }
      v48 = (System_Char_array *)sub_B775DC(char___TypeInfo, 2LL);
      if ( !v48 )
        sub_B7769C(0LL, 0LL);
      v49 = v48->max_length;
      if ( !v49 )
      {
        v128 = sub_B776C8(v48);
        sub_B77668(v128, 0LL);
      }
      v48->m_Items[2] = 13;
      if ( v49 == 1 )
      {
        v129 = sub_B776C8(v48);
        sub_B77668(v129, 0LL);
      }
      v48->m_Items[3] = 10;
      if ( !v43 )
        sub_B7769C(v48, v48);
      this = (AssetManager__InitCR_d__130_o *)System_String__Split_44962720(v43, v48, 1, 0LL);
      v50 = this;
      if ( !this )
        goto LABEL_136;
      _2__current = this->fields.__2__current;
      if ( !_2__current )
        goto LABEL_108;
      if ( !(_DWORD)_2__current )
        goto LABEL_315;
      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1567/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_108:
        v38 = &StringLiteral_2183/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_109:
        v101 = (System_String_o *)*v38;
        if ( *v38 )
        {
          v102 = AssetManager_TypeInfo;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v102 = AssetManager_TypeInfo;
          }
          static_fields = v102->static_fields;
          v104 = (System_Int32_array **)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B77560(
            (BattleServantConfConponent_o *)&static_fields->assetBundleMasterVersion,
            v104,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          v105 = (System_Int32_array **)StringLiteral_1/*""*/;
          v106 = AssetManager_TypeInfo->static_fields;
          v106->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B77560(
            (BattleServantConfConponent_o *)&v106->assetBundleDateVersion,
            v105,
            v107,
            v108,
            v109,
            v110,
            v111,
            v112);
          v113 = (System_Int32_array **)StringLiteral_1/*""*/;
          v114 = AssetManager_TypeInfo->static_fields;
          v114->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B77560(
            (BattleServantConfConponent_o *)&v114->assetBundleBuildVersion,
            v113,
            v115,
            v116,
            v117,
            v118,
            v119,
            v120);
          this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
          if ( !this )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
            (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v121 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v121 = ManagerConfig_TypeInfo;
          }
          v122 = v121->static_fields;
          if ( v122->UseDebugCommand )
          {
            if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v121);
              v122 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v122->ServerDefaultType, (System_String_o *)StringLiteral_11801/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v124 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v124,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_314;
              methoda.fields.value = 0LL;
              *(_DWORD *)&methoda.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                Instance,
                (System_String_o *)StringLiteral_16036/*"[FFFF80]Download error for debug"*/,
                v101,
                v124,
                1,
                0,
                -1.0,
                1,
                methoda,
                0LL);
LABEL_32:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v17;
                p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                sub_B77560(p__2__current, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !LODWORD(v50->fields.__2__current) )
        goto LABEL_315;
      v52 = (System_String_o *)v50->fields.__4__this;
      this = (AssetManager__InitCR_d__130_o *)sub_B775DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_314;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_315;
      LOWORD(this->fields.__4__this) = 44;
      if ( !v52 )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)System_String__Split(v52, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_314;
      v53 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_315;
      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_314;
      v54 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v61 = AssetManager_TypeInfo;
      v62 = (System_Int32_array **)v54;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v61 = AssetManager_TypeInfo;
      }
      v63 = v61->static_fields;
      v63->assetBundleMasterVersion = (struct System_String_o *)v62;
      sub_B77560((BattleServantConfConponent_o *)&v63->assetBundleMasterVersion, v62, v55, v56, v57, v58, v59, v60);
      v70 = AssetManager_TypeInfo;
      if ( SLODWORD(v53->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (System_Int32_array ***)&v53->fields._configFileUrl_5__2;
      v72 = *p_configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v70 = AssetManager_TypeInfo;
      }
      v73 = v70->static_fields;
      v73->assetBundleDateVersion = (struct System_String_o *)v72;
      sub_B77560((BattleServantConfConponent_o *)&v73->assetBundleDateVersion, v72, v64, v65, v66, v67, v68, v69);
      v80 = AssetManager_TypeInfo;
      if ( SLODWORD(v53->fields.__2__current) <= 2 )
        p_loader_5__3 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (System_Int32_array ***)&v53->fields._loader_5__3;
      v82 = *p_loader_5__3;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v80 = AssetManager_TypeInfo;
      }
      v83 = v80->static_fields;
      v83->assetBundleBuildVersion = (struct System_String_o *)v82;
      sub_B77560((BattleServantConfConponent_o *)&v83->assetBundleBuildVersion, v82, v74, v75, v76, v77, v78, v79);
      v84 = (int)v50->fields.__2__current;
      if ( v84 >= 2 )
      {
        v85 = 5LL;
        v349 = v50;
        while ( (int)v85 - 4 < (unsigned int)v84 )
        {
          v86 = (System_String_o *)*((_QWORD *)&v50->klass + v85);
          this = (AssetManager__InitCR_d__130_o *)sub_B775DC(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_314;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            break;
          LOWORD(this->fields.__4__this) = 44;
          if ( !v86 )
            goto LABEL_314;
          this = (AssetManager__InitCR_d__130_o *)System_String__Split(v86, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_314;
          v87 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_136;
          this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_314;
          v88 = System_String__Trim_44889268((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v88, 0LL);
          if ( LODWORD(v87->fields.__2__current) < 3 )
            goto LABEL_315;
          v89 = (int)this;
          this = (AssetManager__InitCR_d__130_o *)v87->fields._loader_5__3;
          if ( !this )
            goto LABEL_314;
          configFileUrl_5__2 = v87->fields._configFileUrl_5__2;
          v91 = System_String__Trim_44889268((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v91, 0LL);
          if ( LODWORD(v87->fields.__2__current) <= 3 )
            goto LABEL_315;
          v92 = (int)this;
          this = *(AssetManager__InitCR_d__130_o **)&v87->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_314;
          v93 = System_String__Trim_44889268((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_UInt32__Parse(v93, 0LL);
          v94 = (int)v87->fields.__2__current;
          if ( (unsigned int)v94 <= 4 )
            goto LABEL_315;
          wait_5__6 = (System_String_o *)v87->fields._wait_5__6;
          v96 = (unsigned int)this;
          attrib = configFileUrl_5__2;
          v97 = v89;
          v98 = v94 >= 6 ? (System_String_o *)v87[1].klass : 0LL;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
          v100 = (AssetData_o *)sub_B77694(AssetData_TypeInfo);
          AssetData___ctor_24382008(v100, 0, wait_5__6, v97, attrib, v92, v96, v98, 0LL);
          if ( !assetBundleReleaseDic )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            assetBundleReleaseDic,
            (System_Xml_XmlQualifiedName_o *)wait_5__6,
            (System_Xml_Schema_XmlSchemaObject_o *)v100,
            (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v50 = v349;
          ++v85;
          v84 = (int)v349->fields.__2__current;
          if ( (int)v85 - 4 >= v84 )
            goto LABEL_136;
        }
        goto LABEL_315;
      }
LABEL_136:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      ConfigFileAddress = (System_Int32_array **)AssetManager__get_ConfigFileAddress(0LL);
      v8->fields._configFileUrl_5__2 = (struct System_String_o *)ConfigFileAddress;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields._configFileUrl_5__2,
        ConfigFileAddress,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
      v8->fields._loader_5__3 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields._loader_5__3, 0LL, v137, v138, v139, v140, v141, v142);
LABEL_140:
      v143 = v8->fields._configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v143, 0LL);
      v145 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v8->fields._loader_5__3 = (struct UnityEngine_Networking_UnityWebRequest_o *)v145;
      v16 = (AssetManager__InitCR_d__130_o **)&v8->fields._loader_5__3;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields._loader_5__3, v145, v146, v147, v148, v149, v150, v151);
      this = (AssetManager__InitCR_d__130_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_314;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v153 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v153 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v153->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v155 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v155, 0LL);
      v8->fields._wait_5__6 = v155;
      sub_B77560(
        (BattleServantConfConponent_o *)&v8->fields._wait_5__6,
        (System_Int32_array **)v155,
        v156,
        v157,
        v158,
        v159,
        v160,
        v161);
LABEL_148:
      this = *v16;
      if ( !*v16 )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_155;
      this = *v16;
      if ( !*v16 )
        goto LABEL_314;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v164 = downloadProgress;
      v171 = UnityEngine_Time__get_unscaledTime(0LL);
      v172 = v164 == loadProgress_5__5;
      v173 = v171;
      if ( !v172 )
      {
        v181 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v181 = ManagerConfig_TypeInfo;
        }
        v182 = v181->static_fields;
        this = (AssetManager__InitCR_d__130_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v173 + v182->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_175;
        }
LABEL_314:
        sub_B7769C(this, method);
      }
      if ( v171 >= v8->fields._requestTime_5__4 )
      {
LABEL_155:
        if ( !_4__this )
          goto LABEL_314;
        this = *v16;
        if ( !*v16 )
          goto LABEL_314;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v180 = (Il2CppObject *)StringLiteral_2193/*"AssetStorageList download time over"*/;
          goto LABEL_260;
        }
        this = *v16;
        if ( !*v16 )
          goto LABEL_314;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__130_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v16 )
          goto LABEL_314;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v179 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v16,
                   0LL);
LABEL_177:
          v180 = (Il2CppObject *)v179;
          goto LABEL_260;
        }
        this = (AssetManager__InitCR_d__130_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v16,
                                                  0LL);
        if ( !this )
          goto LABEL_314;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v176 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v176, 0LL) )
        {
          v177 = v8->fields._configFileUrl_5__2;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          v178 = AssetManager__getUrlString(v177, 0LL);
          v179 = System_String__Concat_44901936((System_String_o *)StringLiteral_2192/*"AssetStorageList download error : "*/, v178, 0LL);
          goto LABEL_177;
        }
        this = (AssetManager__InitCR_d__130_o *)sub_B775DC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_314;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_315;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v176 )
          goto LABEL_314;
        this = (AssetManager__InitCR_d__130_o *)System_String__Trim(v176, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_314;
        v184 = (System_String_o *)this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_24186/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__130_o *)sub_B775DC(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_314;
          v185 = (int)this->fields.__2__current;
          if ( !v185 )
            goto LABEL_315;
          LOWORD(this->fields.__4__this) = 13;
          if ( v185 == 1 )
            goto LABEL_315;
          WORD1(this->fields.__4__this) = 10;
          v186 = System_String__IndexOfAny(v184, (System_Char_array *)this, 0LL);
          if ( v186 >= 2 )
          {
            v187 = v186;
            v188 = System_String__Substring_44965672(v184, 1, v186 - 1, 0LL);
            v189 = System_String__Substring(v184, v187 + 1, 0LL);
            this = (AssetManager__InitCR_d__130_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_314;
            v190 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__130_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                          this,
                                          v189,
                                          this->klass[1]._1.nestedTypes);
            if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v191 = Crc32__Compute(v190, 0LL);
            if ( System_UInt32__Parse(v188, 0LL) == v191 )
            {
              if ( *v16 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v16, 0LL);
                *v16 = 0LL;
                sub_B77560((BattleServantConfConponent_o *)v16, 0LL, v198, v199, v200, v201, v202, v203);
              }
              if ( !v189 )
                goto LABEL_313;
              this = (AssetManager__InitCR_d__130_o *)sub_B775DC(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_314;
              v204 = (int)this->fields.__2__current;
              if ( v204 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v204 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v205 = System_String__Split_44962720(v189, (System_Char_array *)this, 1, 0LL);
                  v206 = (AssetDataListInfo_o *)sub_B77694(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor(v206, 0LL);
                  if ( !v205 )
                    goto LABEL_314;
                  v213 = v205->max_length;
                  p_fields = (BattleServantConfConponent_o *)&v206->fields;
                  p_dateVersion = (BattleServantConfConponent_o *)&v206->fields.dateVersion;
                  p_buildVersion = (BattleServantConfConponent_o *)&v206->fields.buildVersion;
                  attriba = (System_String_o *)v206;
                  if ( v213 >= 1 )
                  {
                    v214 = 0;
                    while ( v214 < v213 )
                    {
                      v215 = v205->m_Items[v214];
                      this = (AssetManager__InitCR_d__130_o *)sub_B775DC(char___TypeInfo, 1LL);
                      if ( !this )
                        goto LABEL_314;
                      method = (const MethodInfo *)this;
                      if ( !LODWORD(this->fields.__2__current) )
                        break;
                      LOWORD(this->fields.__4__this) = 44;
                      if ( !v215 )
                        goto LABEL_314;
                      this = (AssetManager__InitCR_d__130_o *)System_String__Split(v215, (System_Char_array *)this, 0LL);
                      if ( !this )
                        goto LABEL_314;
                      v216 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_299;
                      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_314;
                      this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1567/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v216->fields.__2__current) )
                        goto LABEL_315;
                      v217 = (char)this;
                      this = (AssetManager__InitCR_d__130_o *)v216->fields.__4__this;
                      if ( !this )
                        goto LABEL_314;
                      if ( (v217 & 1) != 0 )
                      {
                        v218 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v219 = (int)v216->fields.__2__current;
                        v220 = (void **)&v216->fields._loader_5__3;
                        v221 = AssetManager_TypeInfo;
                        v222 = v218;
                        if ( v219 == 2 )
                          v220 = &StringLiteral_1/*""*/;
                        v223 = v219 <= 1;
                        if ( v219 <= 1 )
                          v224 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v224 = (System_Int32_array ***)&v216->fields._configFileUrl_5__2;
                        if ( v223 )
                          v225 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v225 = (System_Int32_array ***)v220;
                        v226 = *v224;
                        v227 = *v225;
                        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
                        {
                          v228 = attriba;
                          if ( !AssetManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                            v221 = AssetManager_TypeInfo;
                          }
                        }
                        else
                        {
                          v228 = attriba;
                        }
                        this = (AssetManager__InitCR_d__130_o *)System_String__op_Inequality(
                                                                  v222,
                                                                  v221->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
                          if ( !this )
                            goto LABEL_314;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                            (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v228 )
                          goto LABEL_314;
                        p_fields->klass = (BattleServantConfConponent_c *)v222;
                        sub_B77560(p_fields, (System_Int32_array **)v222, v237, v238, v239, v240, v241, v242);
                        p_dateVersion->klass = (BattleServantConfConponent_c *)v226;
                        sub_B77560(p_dateVersion, v226, v243, v244, v245, v246, v247, v248);
                        p_buildVersion->klass = (BattleServantConfConponent_c *)v227;
                        sub_B77560(p_buildVersion, v227, v249, v250, v251, v252, v253, v254);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_24186/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v216->fields.__2__current) )
                            goto LABEL_315;
                          this = (AssetManager__InitCR_d__130_o *)v216->fields.__4__this;
                          if ( !this )
                            goto LABEL_314;
                          this = (AssetManager__InitCR_d__130_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v216->fields.__2__current) < 5 )
                              goto LABEL_299;
                            this = (AssetManager__InitCR_d__130_o *)v216->fields.__4__this;
                            if ( !this )
                              goto LABEL_314;
                            v229 = System_String__Trim_44889268((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v229, 0LL);
                            if ( LODWORD(v216->fields.__2__current) < 3 )
                              goto LABEL_315;
                            v230 = (int)this;
                            this = (AssetManager__InitCR_d__130_o *)v216->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_314;
                            v231 = v216->fields._configFileUrl_5__2;
                            v232 = System_String__Trim_44889268((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v232, 0LL);
                            if ( LODWORD(v216->fields.__2__current) <= 3 )
                              goto LABEL_315;
                            v233 = (int)this;
                            this = *(AssetManager__InitCR_d__130_o **)&v216->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_314;
                            v234 = System_String__Trim_44889268((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_UInt32__Parse(v234, 0LL);
                            v235 = (int)v216->fields.__2__current;
                            crc = (unsigned int)this;
                            if ( (unsigned int)v235 <= 4 )
                              goto LABEL_315;
                            v236 = (System_String_o *)v216->fields._wait_5__6;
                            if ( v235 >= 6 )
                              keyType = (System_String_o *)v216[1].klass;
                            else
                              keyType = 0LL;
                            AssetData = AssetManager__GetAssetData(
                                          _4__this,
                                          _4__this->fields.assetBundleReleaseDic,
                                          v236,
                                          0LL);
                            if ( AssetData )
                            {
                              v256 = (EventMissionProgressRequest_Argument_ProgressData_o *)AssetData;
                              this = (AssetManager__InitCR_d__130_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        v230,
                                                                        v231,
                                                                        v233,
                                                                        crc,
                                                                        keyType,
                                                                        0LL);
                              if ( !attriba )
                                goto LABEL_314;
                              this = (AssetManager__InitCR_d__130_o *)attriba[1].fields;
                              if ( !this )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                                v256,
                                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AssetData__Add__);
                              v236 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__130_o *)System_String__IsNullOrEmpty(v236, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              size = v233;
                              if ( !attriba )
                                goto LABEL_314;
                              fields = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attriba[1].fields;
                              v258 = v231;
                              v259 = v230;
                              v260 = (AssetData_o *)sub_B77694(AssetData_TypeInfo);
                              AssetData___ctor_24382152(v260, 0, v236, 0, v259, v258, size, crc, keyType, 0LL);
                              if ( !fields )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                fields,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v260,
                                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AssetData__Add__);
                            }
                          }
                        }
                      }
                      v213 = v205->max_length;
                      if ( (int)++v214 >= v213 )
                        goto LABEL_299;
                    }
                    goto LABEL_315;
                  }
LABEL_299:
                  if ( !attriba )
                    goto LABEL_314;
                  v302 = AssetManager_TypeInfo;
                  klass = (System_Int32_array **)p_fields->klass;
                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v302 = AssetManager_TypeInfo;
                  }
                  v304 = v302->static_fields;
                  v304->assetBundleMasterVersion = (struct System_String_o *)klass;
                  sub_B77560(
                    (BattleServantConfConponent_o *)&v304->assetBundleMasterVersion,
                    klass,
                    v207,
                    v208,
                    v209,
                    v210,
                    v211,
                    v212);
                  v305 = AssetManager_TypeInfo->static_fields;
                  v306 = (System_Int32_array **)p_dateVersion->klass;
                  v305->assetBundleDateVersion = (struct System_String_o *)p_dateVersion->klass;
                  sub_B77560(
                    (BattleServantConfConponent_o *)&v305->assetBundleDateVersion,
                    v306,
                    v307,
                    v308,
                    v309,
                    v310,
                    v311,
                    v312);
                  v313 = AssetManager_TypeInfo->static_fields;
                  v314 = (System_Int32_array **)p_buildVersion->klass;
                  v313->assetBundleBuildVersion = (struct System_String_o *)p_buildVersion->klass;
                  sub_B77560(
                    (BattleServantConfConponent_o *)&v313->assetBundleBuildVersion,
                    v314,
                    v315,
                    v316,
                    v317,
                    v318,
                    v319,
                    v320);
                  this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
                  if ( !this )
                    goto LABEL_314;
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                    (const MethodInfo_2F7D7D4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = (AssetManager__InitCR_d__130_o *)attriba[1].fields;
                  if ( !this )
                    goto LABEL_314;
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v353,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
                    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v355 = v353;
                  while ( 1 )
                  {
                    v321 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             &v355,
                             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v321 )
                      break;
                    current = v355.fields.current;
                    if ( !v355.fields.current )
                      sub_B7769C(v321, v322);
                    v324 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                    if ( !v324 )
                      sub_B7769C(0LL, v322);
                    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            v324,
                            (System_Xml_XmlQualifiedName_o *)v355.fields.current[1].monitor,
                            (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v326 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                      if ( !v326 )
                        sub_B7769C(0LL, v325);
                      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                        v326,
                        (System_Xml_XmlQualifiedName_o *)current[1].monitor,
                        (System_Xml_Schema_XmlSchemaObject_o *)current,
                        (const MethodInfo_2F7D5F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    &v355,
                    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, 0LL);
LABEL_313:
                  v8->fields._configFileUrl_5__2 = 0LL;
                  v327 = (BattleServantConfConponent_o *)&v8->fields._configFileUrl_5__2;
                  sub_B77560(v327, 0LL, v192, v193, v194, v195, v196, v197);
                  v327->monitor = 0LL;
                  sub_B77560((BattleServantConfConponent_o *)v16, 0LL, v328, v329, v330, v331, v332, v333);
                  v334 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v334, 0LL);
                  v327[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v334;
                  sub_B77560(
                    (BattleServantConfConponent_o *)((char *)v327 - 16),
                    (System_Int32_array **)v334,
                    v335,
                    v336,
                    v337,
                    v338,
                    v339,
                    v340);
                  *(_DWORD *)&v327[-1].fields.isEquip = 6;
                  return 1;
                }
              }
LABEL_315:
              v341 = sub_B776C8(this);
              sub_B77668(v341, 0LL);
            }
            v261 = (Il2CppObject *)StringLiteral_2189/*"AssetStorageList download crc error"*/;
            if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError(v261, 0LL);
          }
        }
        v180 = (Il2CppObject *)StringLiteral_2190/*"AssetStorageList download data error"*/;
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError(v180, 0LL);
LABEL_260:
        if ( *v16 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v16, 0LL);
          *v16 = 0LL;
          sub_B77560((BattleServantConfConponent_o *)v16, 0LL, v262, v263, v264, v265, v266, v267);
        }
        if ( v180 )
        {
          v268 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v268 = ManagerConfig_TypeInfo;
          }
          v269 = v268->static_fields;
          if ( v269->UseDebugCommand )
          {
            if ( (BYTE3(v268->vtable._0_Equals.methodPtr) & 4) != 0 && !v268->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v268);
              v269 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v269->ServerDefaultType, (System_String_o *)StringLiteral_11801/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              v270 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v271 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v271,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !v270 )
                goto LABEL_314;
              methodb.fields.value = 0LL;
              *(_DWORD *)&methodb.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                v270,
                (System_String_o *)StringLiteral_16036/*"[FFFF80]Download error for debug"*/,
                (System_String_o *)v180,
                v271,
                1,
                0,
                -1.0,
                1,
                methodb,
                0LL);
LABEL_273:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v272 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v272, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v272;
                v273 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                sub_B77560(v273, (System_Int32_array **)v272, v274, v275, v276, v277, v278, v279);
                v280 = 3;
LABEL_297:
                *(_DWORD *)&v273[-1].fields.isOpenAfter = v280;
                return 1;
              }
            }
          }
          LOBYTE(_4__this->fields.writeRequestThread) = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_4388A00 )
          {
            sub_B775C4(&ManagementManager_TypeInfo);
            byte_4388A00 = 1;
          }
          v281 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v281 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v281->static_fields->isDuringStartup;
          v283 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( isDuringStartup )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v284 = LocalizationManager__Get((System_String_o *)StringLiteral_1817/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v285 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v285,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v283 )
              goto LABEL_314;
            CommonUI__OpenRetryBootDialog(v283, (System_String_o *)StringLiteral_1/*""*/, v284, v285, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v286 = LocalizationManager__Get((System_String_o *)StringLiteral_1818/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v287 = (ErrorDialog_ClickDelegate_o *)sub_B77694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v287,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v283 )
              goto LABEL_314;
            CommonUI__OpenRetryDialog(v283, (System_String_o *)StringLiteral_1/*""*/, v286, v287, 0, 0LL);
          }
LABEL_294:
          if ( LOBYTE(_4__this->fields.writeRequestThread) )
          {
            v288 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v288, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v288;
            v273 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B77560(v273, (System_Int32_array **)v288, v289, v290, v291, v292, v293, v294);
            v280 = 4;
            goto LABEL_297;
          }
        }
        v295 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v295, 1.0, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v295;
        v273 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B77560(v273, (System_Int32_array **)v295, v296, v297, v298, v299, v300, v301);
        v280 = 5;
        goto LABEL_297;
      }
LABEL_175:
      v183 = (System_Int32_array **)v8->fields._wait_5__6;
      v8->fields.__2__current = (Il2CppObject *)v183;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields.__2__current, v183, v165, v166, v167, v168, v169, v170);
      v8->fields.__1__state = 2;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_32;
      goto LABEL_314;
    case 2:
      v16 = (AssetManager__InitCR_d__130_o **)&v8->fields._loader_5__3;
      v8->fields.__1__state = -1;
      goto LABEL_148;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_273;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_294;
    case 5:
      v8->fields._wait_5__6 = 0LL;
      v8->fields.__1__state = -1;
      sub_B77560((BattleServantConfConponent_o *)&v8->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_140;
    case 6:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      _4__this->fields.assetBundleDic = 0LL;
      BYTE2(_4__this->fields.writeRequestThread) = 0;
      BYTE2(_4__this->fields.initCRW) = 1;
      sub_B77560((BattleServantConfConponent_o *)&_4__this->fields.assetBundleDic, 0LL, v2, v3, v4, v5, v6, v7);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AssetManager__InitCR_d__130__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__InitCR_d__130__System_Collections_IEnumerator_Reset(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_AssetManager__InitCR_d__130_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall AssetManager__InitCR_d__130__System_Collections_IEnumerator_get_Current(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__InitCR_d__130__System_IDisposable_Dispose(
        AssetManager__InitCR_d__130_o *this,
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v8; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **wait_5__2; // x1
  bool result; // w0

  v8 = this;
  if ( (byte_4389F3D & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4389F3D = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields._wait_5__2,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !_4__this )
LABEL_12:
      sub_B7769C(this, method);
  }
  if ( BYTE4(_4__this->fields.writeRequestThread) || BYTE3(_4__this->fields.writeRequestThread) )
  {
    wait_5__2 = (System_Int32_array **)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields.__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    v8->fields.__1__state = 1;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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


void __fastcall AssetManager___c__DisplayClass117_0___ctor(
        AssetManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass117_0___DownloadAssetStorageAttributeWithCheckDialog_b__1(
        AssetManager___c__DisplayClass117_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isDataUpdate = 1;
  else
    UnityEngine_Application__Quit_41389268(0LL);
}


void __fastcall AssetManager___c__DisplayClass147_0___ctor(
        AssetManager___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass147_0___LoadStart_b__0(
        AssetManager___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  AssetLoader_o *loader; // x20
  System_Int32_array **_4__this; // x22
  __int64 v5; // x21
  __int64 v6; // x9
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4389F39 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetManager_OnEndLoadAssetStorage__);
    sub_B775C4(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4389F39 = 1;
  }
  loader = this->fields.loader;
  _4__this = (System_Int32_array **)this->fields.__4__this;
  v5 = sub_B77694(AssetLoader_LoadEndHandler_TypeInfo);
  v6 = *(_QWORD *)Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v5 + 40) = Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 32) = _4__this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), _4__this, v7, v8, v9, v10, v11, v12);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_B7769C(v13, v14);
  AssetLoader__StartLoad(loader, (AssetLoader_LoadEndHandler_o *)v5, waiter->fields.resourceNames, 0LL);
}


void __fastcall AssetManager___c__DisplayClass168_0___ctor(
        AssetManager___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass168_0___LoadAssetStorage_b__0(
        AssetManager___c__DisplayClass168_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetManager___c__DisplayClass168_0_o *v4; // x19
  struct System_Collections_Generic_List_string__o *remainNameList; // x8
  struct AssetManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_4389F3A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Remove__);
    this = (AssetManager___c__DisplayClass168_0_o *)sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4389F3A = 1;
  }
  ++v4->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_13;
  this = (AssetManager___c__DisplayClass168_0_o *)v4->fields.remainNameList;
  if ( !this )
    goto LABEL_13;
  this = (AssetManager___c__DisplayClass168_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                    (WarBoardManager_TaskList_o *)data->fields.name,
                                                    (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_13:
    sub_B7769C(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass168_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, 0LL);
      _4__this = v4->fields.__4__this;
      if ( _4__this )
      {
        HIDWORD(_4__this->fields.unloadCallbacks) = v4->fields.loadParallelMax;
        this = (AssetManager___c__DisplayClass168_0_o *)v4->fields.__4__this;
        v4->fields.calledCallbackFunc = 1;
        if ( this )
        {
          AssetManager__LoadStart((AssetManager_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_13;
  }
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__137___ctor(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__coUnloadUnusedAssets_d__137__MoveNext(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  AssetManager__coUnloadUnusedAssets_d__137_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **wait_5__2; // x1
  bool v19; // w21
  System_Int32_array **v20; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  AssetManager_ResourceUnloadEventHandler_o *v28; // x0
  BattleServantConfConponent_o *p_downLoadWaitList; // x20
  AssetManager_ResourceUnloadEventHandler_o *downLoadWaitList; // t1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  v2 = this;
  if ( (byte_4389F3E & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    this = (AssetManager__coUnloadUnusedAssets_d__137_o *)sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4389F3E = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    downLoadWaitList = (AssetManager_ResourceUnloadEventHandler_o *)_4__this->fields.downLoadWaitList;
    p_downLoadWaitList = (BattleServantConfConponent_o *)&_4__this->fields.downLoadWaitList;
    v28 = downLoadWaitList;
    *(_WORD *)(&p_downLoadWaitList[-1].fields.isEquip + 3) = 0;
    if ( downLoadWaitList )
    {
      AssetManager_ResourceUnloadEventHandler__Invoke(v28, method);
      p_downLoadWaitList->klass = 0LL;
      sub_B77560(p_downLoadWaitList, 0LL, v31, v32, v33, v34, v35, v36);
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_8;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
  v2->fields._wait_5__2 = v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields._wait_5__2,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
LABEL_8:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__137_o *)AssetManager__LoadIsBusy(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v19 = 1;
      BYTE4(_4__this->fields.writeRequestThread) = 1;
      v20 = (System_Int32_array **)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v20;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, v20, v22, v23, v24, v25, v26, v27);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return v19;
    }
LABEL_20:
    sub_B7769C(this, method);
  }
  wait_5__2 = (System_Int32_array **)v2->fields._wait_5__2;
  v2->fields.__2__current = (Il2CppObject *)wait_5__2;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.__2__current, wait_5__2, v12, v13, v14, v15, v16, v17);
  v19 = 1;
  v2->fields.__1__state = 1;
  return v19;
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__137__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__coUnloadUnusedAssets_d__137__System_Collections_IEnumerator_Reset(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_AssetManager__coUnloadUnusedAssets_d__137_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__137__System_Collections_IEnumerator_get_Current(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__137__System_IDisposable_Dispose(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  ;
}