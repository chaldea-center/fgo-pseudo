void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v30; // x1
  struct AssetManager_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct AssetManager_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct AssetManager_StaticFields *v47; // x0
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct AssetManager_StaticFields *v55; // x0
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct AssetManager_StaticFields *v63; // x0
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct AssetManager_StaticFields *v71; // x0
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  struct AssetManager_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  struct AssetManager_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7

  if ( (byte_42EB7F6 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2123/*"Asset"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2136/*"AssetStorageBack.txt"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21477/*"offline"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2135/*"AssetStorage.txt"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2137/*"AssetStorageCreate.txt"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_21547/*"online"*/, v26, v27, v28);
    byte_42EB7F6 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AssetManager_TypeInfo->static_fields;
  v30 = (System_Int32_array **)StringLiteral_2123/*"Asset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2123/*"Asset"*/;
  sub_B5D560(static_fields, v30, v2, v3, v4, v5, v6, v7);
  v31 = AssetManager_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_21477/*"offline"*/;
  v31->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_21477/*"offline"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v31->SAVE_DATA_OFFLINE, v32, v33, v34, v35, v36, v37, v38);
  v39 = AssetManager_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_21547/*"online"*/;
  v39->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_21547/*"online"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v39->SAVE_DATA_ONLINE, v40, v41, v42, v43, v44, v45, v46);
  v47 = AssetManager_TypeInfo->static_fields;
  v48 = (System_Int32_array **)StringLiteral_2135/*"AssetStorage.txt"*/;
  v47->configFileName = (struct System_String_o *)StringLiteral_2135/*"AssetStorage.txt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v47->configFileName, v48, v49, v50, v51, v52, v53, v54);
  v55 = AssetManager_TypeInfo->static_fields;
  v56 = (System_Int32_array **)StringLiteral_2137/*"AssetStorageCreate.txt"*/;
  v55->createConfigFileName = (struct System_String_o *)StringLiteral_2137/*"AssetStorageCreate.txt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v55->createConfigFileName, v56, v57, v58, v59, v60, v61, v62);
  v63 = AssetManager_TypeInfo->static_fields;
  v64 = (System_Int32_array **)StringLiteral_2136/*"AssetStorageBack.txt"*/;
  v63->backConfigFileName = (struct System_String_o *)StringLiteral_2136/*"AssetStorageBack.txt"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v63->backConfigFileName, v64, v65, v66, v67, v68, v69, v70);
  v71 = AssetManager_TypeInfo->static_fields;
  v72 = (System_Int32_array **)StringLiteral_1/*""*/;
  v71->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v71->assetBundleMasterVersion, v72, v73, v74, v75, v76, v77, v78);
  v79 = (System_Int32_array **)StringLiteral_1/*""*/;
  v80 = AssetManager_TypeInfo->static_fields;
  v80->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v80->assetBundleDateVersion, v79, v81, v82, v83, v84, v85, v86);
  v87 = (System_Int32_array **)StringLiteral_1/*""*/;
  v88 = AssetManager_TypeInfo->static_fields;
  v88->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v88->assetBundleBuildVersion, v87, v89, v90, v91, v92, v93, v94);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_42EB7F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_AssetLoader__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42EB7F5 = 1;
  }
  LOWORD(this->fields.initCRW) = 257;
  BYTE2(this->fields.initCRW) = 1;
  v26 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v26,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetBundleReleaseDic,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v33,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetResourceDic,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v40,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.requestConfigWriteData = (struct System_String_o *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.requestConfigWriteData,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v47, v48, v49, v50, v51, v52, v53);
  LODWORD(this->fields.processingAssetLoaderList) = -1082130432;
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.downloadSize = (int64_t)v54;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.downloadSize,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  HIDWORD(this->fields.unloadCallbacks) = 1;
  v61 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v61,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this[1].klass = (AssetManager_c *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int64_t downloadSize; // x23
  __int64 v25; // x24
  int v26; // w8
  __int64 v27; // x23
  const MethodInfo *v28; // x2
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v30; // x1
  AssetManager_LoadWaitStatus_o *v31; // x22
  char v32; // w19
  int v33; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v35; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_42EB7E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      type,
      (_DWORD)name,
      callbackFunc);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v18, v19, v20);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__,
                               v21,
                               v22,
                               v23);
    byte_42EB7E1 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  downloadSize = v8->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v25 = 0LL;
  while ( 1 )
  {
    v26 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v25 >= v26 )
      break;
    if ( v26 <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v27 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v25 + 32);
    if ( !v27 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v27 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_30638412(
                                 (AssetData_o *)this,
                                 type,
                                 name,
                                 (const MethodInfo *)callbackFunc);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( callbackFunc )
          AssetLoader__add_endCallback2((AssetLoader_o *)v27, callbackFunc, v28);
        return 1;
      }
    }
    downloadSize = v8->fields.downloadSize;
    ++v25;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v8[1].klass;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&type);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v35,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_2B9E574 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v35,
            (const MethodInfo_201F1E4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v35,
                (const MethodInfo_201F2E8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v31 = Current;
    if ( !Current )
      sub_B5D69C(0LL, v30);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v31, callbackFunc, 0LL);
      v32 = 1;
      v33 = 5;
      goto LABEL_23;
    }
  }
  v32 = 0;
  v33 = 3;
LABEL_23:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v35,
    (const MethodInfo_201F1D4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v33 == 5) & v32;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int64_t downloadSize; // x23
  __int64 v25; // x24
  int v26; // w8
  __int64 v27; // x23
  const MethodInfo *v28; // x2
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v30; // x1
  AssetManager_LoadWaitStatus_o *v31; // x22
  char v32; // w19
  int v33; // w20
  __int64 v34; // x8
  int v35; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v37; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_42EB7E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      type,
      (_DWORD)name,
      callbackFunc);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v18, v19, v20);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__,
                               v21,
                               v22,
                               v23);
    byte_42EB7E0 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  downloadSize = v8->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v25 = 0LL;
  while ( 1 )
  {
    v26 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v25 >= v26 )
      break;
    if ( v26 <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v27 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v25 + 32);
    if ( !v27 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v27 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_30638412(
                                 (AssetData_o *)this,
                                 type,
                                 name,
                                 (const MethodInfo *)callbackFunc);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = *(_QWORD *)(v27 + 24);
        if ( v34 )
        {
          v35 = *(_DWORD *)(v34 + 84);
          if ( (v35 & 0x80000000) == 0 )
            *(_DWORD *)(v34 + 84) = v35 + 1;
          if ( callbackFunc )
            AssetLoader__add_endCallback2((AssetLoader_o *)v27, callbackFunc, v28);
          return 1;
        }
LABEL_12:
        sub_B5D69C(this, *(_QWORD *)&type);
      }
    }
    downloadSize = v8->fields.downloadSize;
    ++v25;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v8[1].klass;
  if ( !this )
    goto LABEL_12;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v37,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_2B9E574 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v37,
            (const MethodInfo_201F1E4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v37,
                (const MethodInfo_201F2E8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v31 = Current;
    if ( !Current )
      sub_B5D69C(0LL, v30);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddEntry(v31, 0LL);
      AssetManager_LoadWaitStatus__AddCallback(v31, callbackFunc, 0LL);
      v32 = 1;
      v33 = 9;
      goto LABEL_26;
    }
  }
  v32 = 0;
  v33 = 7;
LABEL_26:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v37,
    (const MethodInfo_201F1D4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v33 == 9) & v32;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  AssetManager_LoadWaitStatus_o *v9; // x21
  __int64 v10; // x1
  AssetManager_c *klass; // x0

  if ( (byte_42EB7E3 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_LoadWaitStatus_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v6, v7, v8);
    byte_42EB7E3 = 1;
  }
  v9 = (AssetManager_LoadWaitStatus_o *)sub_B5D694(AssetManager_LoadWaitStatus_TypeInfo);
  AssetManager_LoadWaitStatus___ctor(v9, callbackFunc, 0LL);
  klass = this[1].klass;
  if ( !klass )
    sub_B5D69C(0LL, v10);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)klass,
    (Mono_Net_CFNetwork_GetProxyData_o *)v9,
    (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_30669584(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AssetManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  AssetManager_LoadWaitStatus_o *v9; // x21

  v5 = this;
  if ( (byte_42EB7E4 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_LoadWaitStatus_TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v6,
                               v7,
                               v8);
    byte_42EB7E4 = 1;
  }
  if ( !info
    || (*(_QWORD *)&v5->fields.isErrorDialog += info->fields.size,
        v9 = (AssetManager_LoadWaitStatus_o *)sub_B5D694(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_22917056(v9, info, 0LL),
        (this = (AssetManager_o *)v5[1].klass) == 0LL) )
  {
    sub_B5D69C(this, info);
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
    (Mono_Net_CFNetwork_GetProxyData_o *)v9,
    (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_30679660(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  AssetManager_LoadWaitStatus_o *v12; // x23

  v8 = this;
  if ( (byte_42EB7E5 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_LoadWaitStatus_TypeInfo, (_DWORD)info, (_DWORD)callbackFunc, resourceNames);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9,
                               v10,
                               v11);
    byte_42EB7E5 = 1;
  }
  if ( !info
    || (*(_QWORD *)&v8->fields.isErrorDialog += info->fields.size,
        v12 = (AssetManager_LoadWaitStatus_o *)sub_B5D694(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_22917108(v12, info, callbackFunc, resourceNames, 0LL),
        (this = (AssetManager_o *)v8[1].klass) == 0LL) )
  {
    sub_B5D69C(this, info);
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
    (Mono_Net_CFNetwork_GetProxyData_o *)v12,
    (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v17; // x20
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *klass; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **v26; // x21
  struct Mono_Net_CFNetwork_GetProxyData_array *array; // x8

  if ( (byte_42EB7D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v14, v15, v16);
    byte_42EB7D8 = 1;
  }
  v17 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v17,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  v26 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **)&this[1];
  klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this[1].klass;
  if ( !klass )
LABEL_12:
    sub_B5D69C(klass, v18);
  while ( klass->fields._size > 0 )
  {
    klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                                            klass,
                                                                            (const MethodInfo_2B9E6B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !klass )
      goto LABEL_12;
    array = klass->fields._array;
    v18 = klass;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      *(_QWORD *)&this->fields.isErrorDialog -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v17 )
        goto LABEL_12;
      System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
        v17,
        (Mono_Net_CFNetwork_GetProxyData_o *)klass,
        (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    klass = *v26;
    if ( !*v26 )
      goto LABEL_12;
  }
  this[1].klass = (AssetManager_c *)v17;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
  BYTE2(this->fields.writeRequestThread) = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *klass; // x0

  if ( (byte_42EB7D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, (_DWORD)method, v2, v3);
    byte_42EB7D9 = 1;
  }
  klass = this[1].klass;
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  if ( !klass )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *v5; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_42EB7A6 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB7A6 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v5->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_B5D69C(0LL, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int64_t downloadSize; // x23
  __int64 v23; // x22
  int v24; // w8
  __int64 v25; // x8
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v27; // x1
  char v28; // w19
  int v29; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v31; // [xsp+8h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_42EB7E2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      type,
      (_DWORD)name,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v16, v17, v18);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__,
                               v19,
                               v20,
                               v21);
    byte_42EB7E2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  downloadSize = v6->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v23 = 0LL;
  while ( 1 )
  {
    v24 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v23 >= v24 )
      break;
    if ( v24 <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v23 + 32);
    if ( !v25 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v25 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_30638412((AssetData_o *)this, type, name, method);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    downloadSize = v6->fields.downloadSize;
    ++v23;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v6[1].klass;
  if ( !this )
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&type);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v31,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_2B9E574 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v31,
            (const MethodInfo_201F1E4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v31,
                (const MethodInfo_201F2E8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_B5D69C(0LL, v27);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      v28 = 1;
      v29 = 2;
      goto LABEL_21;
    }
  }
  v29 = 0;
  v28 = 0;
LABEL_21:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v31,
    (const MethodInfo_201F1D4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v29 == 2) & v28;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AssetManager_c *v6; // x0
  AssetManager_c *v7; // x0

  if ( (byte_42EB7A5 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)dateVersion, (_DWORD)method, v3);
    byte_42EB7A5 = 1;
  }
  v6 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v6 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v6->static_fields->assetBundleMasterVersion, masterVersion, 0LL) )
    return 0;
  v7 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v7 = AssetManager_TypeInfo;
  }
  return System_String__op_Equality(v7->static_fields->assetBundleDateVersion, dateVersion, 0LL);
}


void __fastcall AssetManager__ClearCacheWithoutSystemAssets(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  System_String_o *Path; // x22
  const MethodInfo *v29; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-88h] BYREF
  int v31; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42EB7F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&StringLiteral_12716/*"SYSTEM"*/, v17, v18, v19);
    byte_42EB7F4 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleReleaseDic, 0LL) )
  {
    assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
    if ( !assetBundleReleaseDic
      || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_B5D69C(assetBundleReleaseDic, v20);
    }
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v30,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v32 = v30;
    while ( 1 )
    {
      v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v32,
              (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v22 )
        break;
      currentValue = (AssetData_o *)v32.fields.currentValue;
      if ( !v32.fields.currentValue )
        sub_B5D69C(v22, v23);
      klass = v32.fields.currentValue[2].klass;
      if ( !klass )
        sub_B5D69C(0LL, v23);
      if ( !System_String__Equals_44635784((System_String_o *)klass, (System_String_o *)StringLiteral_12716/*"SYSTEM"*/, 5, 0LL) )
      {
        AssetManager__ReleaseReservation(this, currentValue, v26);
        Path = AssetData__get_Path(currentValue, v27);
        if ( System_IO_File__Exists(Path, 0LL) )
        {
          System_IO_File__Delete(Path, 0LL);
          if ( !System_IO_File__Exists(Path, 0LL) )
            currentValue->fields.nowVersion = 0;
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v32,
      (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x0
  int32_t Count; // w22
  System_Text_StringBuilder_o *v41; // x21
  AssetManager_c *v42; // x0
  AssetManager_c *v43; // x0
  AssetManager_c *v44; // x0
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *currentValue; // x23
  Il2CppObject *v48; // x22
  System_String_o *v49; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v51; // x1
  System_Byte_array *v52; // x24
  System_String_o *v53; // x1
  System_String_o *v54; // x21
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int v62; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+8h] [xbp-88h] BYREF
  int v64[3]; // [xsp+20h] [xbp-70h]
  int v65; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v66; // [xsp+30h] [xbp-60h] BYREF
  uint32_t v67; // [xsp+58h] [xbp-38h] BYREF
  bool lockTaken; // [xsp+5Ch] [xbp-34h] BYREF

  if ( (byte_42EB7DC & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, isFast, (_DWORD)method, v3);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Crc32_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_24010/*"~"*/, v36, v37, v38);
    byte_42EB7DC = 1;
  }
  memset(&v66, 0, sizeof(v66));
  lockTaken = 0;
  v67 = 0;
  v65 = 0;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         assetBundleReleaseDic,
         (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            assetBundleReleaseDic,
            (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v41 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947772(v41, 60 * Count, 0LL);
  if ( !v41 )
    goto LABEL_43;
  System_Text_StringBuilder__Append_42956988(v41, 0x40u, 0LL);
  v42 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v42 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_42953744(v41, v42->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_42956988(v41, 0x2Cu, 0LL);
    v43 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v43 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_42953744(v41, v43->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_42956988(v41, 0x2Cu, 0LL);
      v44 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v44 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_42953744(v41, v44->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_42956988(v41, 0xAu, 0LL);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_43:
    sub_B5D69C(assetBundleReleaseDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v63,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v66 = v63;
  while ( 1 )
  {
    v45 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v66,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v45 )
      break;
    currentValue = v66.fields.currentValue;
    if ( !v66.fields.currentValue )
      sub_B5D69C(v45, v46);
    System_Text_StringBuilder__Append_42957084(v41, (int32_t)v66.fields.currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_42956988(v41, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42953744(v41, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_42956988(v41, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42957084(v41, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_42956988(v41, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42957364(v41, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_42956988(v41, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42953744(v41, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_42953744(v41, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  }
  v64[0] = 299;
  v65 = 1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v66,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v65 = 0;
  v48 = *(Il2CppObject **)&this->fields.requestWriteCounter;
  lockTaken = 0;
  System_Threading_Monitor__Enter_15675620(v48, &lockTaken, 0LL);
  v49 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v41->klass->vtable._3_ToString.method)(
                             v41,
                             v41->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B5D69C(0LL, v51);
  v52 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               v49,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v67 = Crc32__Compute(v52, 0LL);
  v53 = System_UInt32__ToString((uint32_t)&v67, 0LL);
  v54 = System_String__Concat_44581200(
          (System_String_o *)StringLiteral_24010/*"~"*/,
          v53,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          v49,
          0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v55 = (System_Int32_array **)CatAndMouseGame__CatGame8(v54, 0LL);
  *(_QWORD *)&this->fields.requestWriteCounter = v55;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v55, v56, v57, v58, v59, v60, v61);
  if ( isFast )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 0;
  }
  else if ( *(float *)&this->fields.processingAssetLoaderList < 0.0 )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 1065353216;
  }
  v64[0] = 436;
  v62 = ++v65;
  if ( lockTaken )
    System_Threading_Monitor__Exit(v48, 0LL);
  if ( v62 && v64[v62 - 1] == 436 )
    v65 = v62 - 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.reserveWriteRequest, 0LL, v4, v5, v6, v7, v8, v9);
  if ( LOBYTE(this->fields.unloadCallbacks) )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x19
  Il2CppObject *v35; // x0
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  double v65; // d0
  unsigned int v66; // w8
  unsigned int v67; // w20
  __int64 v69; // x0
  __int64 v70; // x0
  System_String_o format; // [xsp+8h] [xbp-18h] BYREF

  *(double *)&format.klass = size;
  if ( (byte_42EB7D2 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_8403/*"KB"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23963/*"{0}{1}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9362/*"N2"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13493/*"TB"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2246/*"B"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_8798/*"MB"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6924/*"GB"*/, v23, v24, v25);
    byte_42EB7D2 = 1;
  }
  v26 = sub_B5D5DC(string___TypeInfo, 5LL);
  if ( !v26 )
    sub_B5D69C(0LL, v27);
  v34 = v26;
  v35 = (Il2CppObject *)StringLiteral_2246/*"B"*/;
  if ( StringLiteral_2246/*"B"*/ )
  {
    v35 = (Il2CppObject *)sub_B5D684(StringLiteral_2246/*"B"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !v35 )
      goto LABEL_35;
    v36 = (System_Int32_array **)StringLiteral_2246/*"B"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v34 + 32) = v36;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 32), v36, v28, v29, v30, v31, v32, v33);
  v35 = (Il2CppObject *)StringLiteral_8403/*"KB"*/;
  if ( StringLiteral_8403/*"KB"*/ )
  {
    v35 = (Il2CppObject *)sub_B5D684(StringLiteral_8403/*"KB"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !v35 )
      goto LABEL_35;
    v43 = (System_Int32_array **)StringLiteral_8403/*"KB"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v34 + 40) = v43;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 40), v43, v37, v38, v39, v40, v41, v42);
  v35 = (Il2CppObject *)StringLiteral_8798/*"MB"*/;
  if ( StringLiteral_8798/*"MB"*/ )
  {
    v35 = (Il2CppObject *)sub_B5D684(StringLiteral_8798/*"MB"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !v35 )
      goto LABEL_35;
    v50 = (System_Int32_array **)StringLiteral_8798/*"MB"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( *(_DWORD *)(v34 + 24) <= 2u )
    goto LABEL_34;
  *(_QWORD *)(v34 + 48) = v50;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 48), v50, v44, v45, v46, v47, v48, v49);
  v35 = (Il2CppObject *)StringLiteral_6924/*"GB"*/;
  if ( StringLiteral_6924/*"GB"*/ )
  {
    v35 = (Il2CppObject *)sub_B5D684(StringLiteral_6924/*"GB"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !v35 )
      goto LABEL_35;
    v57 = (System_Int32_array **)StringLiteral_6924/*"GB"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( *(_DWORD *)(v34 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v34 + 56) = v57;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 56), v57, v51, v52, v53, v54, v55, v56);
  v35 = (Il2CppObject *)StringLiteral_13493/*"TB"*/;
  if ( !StringLiteral_13493/*"TB"*/ )
  {
    v64 = 0LL;
    goto LABEL_28;
  }
  v35 = (Il2CppObject *)sub_B5D684(StringLiteral_13493/*"TB"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
  if ( !v35 )
  {
LABEL_35:
    v70 = sub_B5D6BC(v35);
    sub_B5D668(v70, 0LL);
  }
  v64 = (System_Int32_array **)StringLiteral_13493/*"TB"*/;
LABEL_28:
  if ( *(_DWORD *)(v34 + 24) <= 4u )
    goto LABEL_34;
  *(_QWORD *)(v34 + 64) = v64;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 64), v64, v58, v59, v60, v61, v62, v63);
  v65 = *(double *)&format.klass;
  v66 = -1;
  do
  {
    if ( v65 < 1000.0 )
      break;
    ++v66;
    v65 = v65 / 1000.0;
    *(double *)&format.klass = v65;
  }
  while ( v66 <= 2 );
  v67 = v66 + 1;
  v35 = (Il2CppObject *)System_Double__ToString_44521484(v65, &format, (const MethodInfo *)StringLiteral_9362/*"N2"*/);
  if ( v67 >= *(_DWORD *)(v34 + 24) )
  {
LABEL_34:
    v69 = sub_B5D6C8(v35);
    sub_B5D668(v69, 0LL);
  }
  return System_String__Format_44573324(
           (System_String_o *)StringLiteral_23963/*"{0}{1}"*/,
           v35,
           *(Il2CppObject **)(v34 + 8LL * (int)v67 + 32),
           0LL);
}


void __fastcall AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *klass; // x0
  __int64 v33; // x1
  int64_t downloadSize; // x8
  int v35; // w8
  int v36; // w9
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int v39; // w20
  int v40; // w8
  int v41; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-98h] BYREF
  int v43[3]; // [xsp+20h] [xbp-80h]
  int v44; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v45; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v46; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_42EB7CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v29,
      v30,
      v31);
    byte_42EB7CC = 1;
  }
  memset(&v46, 0, sizeof(v46));
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this[1].klass;
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v42,
    klass,
    (const MethodInfo_2B9E574 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v46 = v42;
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v46,
            (const MethodInfo_201F1E4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v46,
            (const MethodInfo_201F2E8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_B5D69C(0LL, v33);
  }
  v43[0] = 52;
  v44 = 1;
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v46,
    (const MethodInfo_201F1D4 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  v44 = 0;
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_28;
  v35 = *(_DWORD *)(downloadSize + 24);
  v36 = -1;
  do
    ++v36;
  while ( v36 < v35 );
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.assetBundleReleaseDic;
  if ( !klass )
    goto LABEL_28;
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)klass,
                                                                               (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)klass,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v45 = v42;
  while ( 1 )
  {
    v37 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v45,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v37 )
      break;
    if ( !v45.fields.currentValue )
      sub_B5D69C(v37, v38);
  }
  v43[0] = 131;
  v39 = ++v44;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v45,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v39 )
  {
    v40 = v39 - 1;
    if ( v43[v39 - 1] == 131 )
    {
      --v39;
      v44 = v40;
    }
  }
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.requestConfigWriteData;
  if ( !klass
    || (klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)klass,
                                                                                     (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(klass, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)klass,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v45 = v42;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v45,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  v43[v39] = 183;
  v41 = ++v44;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v45,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v41 && v43[v41 - 1] == 183 )
    v44 = v41 - 1;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB7E8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager__DelayLoadStart_d__148_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB7E8 = 1;
  }
  v5 = sub_B5D694(AssetManager__DelayLoadStart_d__148_TypeInfo);
  AssetManager__DelayLoadStart_d__148___ctor((AssetManager__DelayLoadStart_d__148_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *v4; // x0

  if ( (byte_42EB79E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    byte_42EB79E = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY, 0LL);
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
        AssetManager__AddLoadWaitStatus_30679660(this, AssetData, callbackFunc, 0LL, v12);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EB7D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      (_DWORD)attrib,
      loadParallelMax,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v16,
      v17,
      v18);
    byte_42EB7D3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B5D69C(assetBundleReleaseDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v27,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v20 )
      break;
    currentValue = (AssetData_o *)v27.fields.currentValue;
    if ( !v27.fields.currentValue )
      sub_B5D69C(v20, v21);
    monitor = (int)v27.fields.currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v27.fields.currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v27.fields.currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_30669584(this, currentValue, v25);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_30669584(this, (AssetData_o *)v27.fields.currentValue, v22);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v27,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(this, v26);
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

  if ( (byte_42EB7D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo,
      (_DWORD)attrib,
      loadParallelMax,
      method);
    byte_42EB7D1 = 1;
  }
  v7 = sub_B5D694(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo);
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117___ctor(
    (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)attrib, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_30672384(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x9
  System_String_o *v23; // x8
  __int64 v24; // x22
  __int64 v25; // x23
  unsigned __int64 v26; // x9
  __int64 v27; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  __int64 v34; // x8
  unsigned __int64 v35; // x25
  signed __int64 v36; // x26
  _BOOL8 v37; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  __int64 v40; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v42; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_42EB7D4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      (_DWORD)attribList,
      loadParallelMax,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v16,
      v17,
      v18);
    this = (AssetManager_o *)sub_B5D5C4(&StringLiteral_709/*", "*/, v19, v20, v21);
    byte_42EB7D4 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !attribList )
LABEL_33:
    sub_B5D69C(this, attribList);
  v22 = *(_QWORD *)&attribList->max_length;
  if ( !v22 )
    return;
  if ( !(_DWORD)v22 )
    goto LABEL_13;
  v23 = attribList->m_Items[0];
  if ( (_DWORD)v22 == 1 )
  {
    AssetManager__DownloadAssetStorageAttribute(v6, attribList->m_Items[0], 1, method);
    return;
  }
  if ( (int)v22 >= 2 )
  {
    if ( (v22 & 0xFFFFFFFE) != 0 )
    {
      v24 = (int)v22;
      v25 = 5LL;
      do
      {
        this = (AssetManager_o *)System_String__Concat_44580072(
                                   v23,
                                   (System_String_o *)StringLiteral_709/*", "*/,
                                   *((System_String_o **)&attribList->obj.klass + v25),
                                   0LL);
        v26 = v25 - 3;
        if ( v25 - 3 >= v24 )
          goto LABEL_14;
        v23 = (System_String_o *)this;
        ++v25;
      }
      while ( v26 < attribList->max_length );
    }
LABEL_13:
    v27 = sub_B5D6C8(this);
    sub_B5D668(v27, 0LL);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleReleaseDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this,
                             (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v41,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v42 = v41;
LABEL_17:
  while ( 1 )
  {
    v28 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v42,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v28 )
      break;
    currentValue = (AssetData_o *)v42.fields.currentValue;
    if ( !v42.fields.currentValue )
      sub_B5D69C(v28, v29);
    monitor = (int)v42.fields.currentValue[2].monitor;
    monitor_high = HIDWORD(v42.fields.currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high )
      {
        v34 = *(_QWORD *)&attribList->max_length;
        if ( (int)v34 >= 1 )
        {
          v35 = 0LL;
          v36 = (int)v34;
          while ( 1 )
          {
            v37 = System_String__op_Equality(attribList->m_Items[v35], currentValue->fields.attrib, 0LL);
            if ( v37 )
              break;
            if ( (__int64)++v35 >= v36 )
              goto LABEL_17;
            if ( v35 >= attribList->max_length )
            {
              v40 = sub_B5D6C8(v37);
              sub_B5D668(v40, 0LL);
            }
          }
          AssetManager__AddLoadWaitStatus_30669584(v6, currentValue, v38);
        }
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_30669584(v6, (AssetData_o *)v42.fields.currentValue, v30);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v42,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(v6->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v6, v39);
}


bool __fastcall AssetManager__DownloadAssetStorage_30662352(
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
    sub_B5D69C(this, 0LL);
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
        v16 = sub_B5D6C8(this);
        sub_B5D668(v16, 0LL);
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

  if ( (byte_42EB7EF & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               (_DWORD)dic,
                               (_DWORD)name,
                               method);
    byte_42EB7EF = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_B5D69C(this, dic);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)name,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_String_o *v33; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *currentValue; // x23
  System_String_o *monitor; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v45; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB7D6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v30, v31, v32);
    byte_42EB7D6 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v33 = System_String__Concat_44577788(path, (System_String_o *)StringLiteral_885/*"/"*/, 0LL);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v44,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v37 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v45,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v37 )
      break;
    currentValue = v45.fields.currentValue;
    if ( !v45.fields.currentValue )
      sub_B5D69C(v37, v38);
    monitor = (System_String_o *)v45.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v38);
    v41 = System_String__StartsWith(monitor, v33, 0LL);
    if ( v41 )
    {
      if ( !v34 )
        sub_B5D69C(v41, v42);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v34,
        (EventMissionProgressRequest_Argument_ProgressData_o *)currentValue[1].monitor,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v45,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v34 )
LABEL_17:
    sub_B5D69C(assetBundleReleaseDic, v35);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_30665472(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AssetManager_o *v5; // x20
  const MethodInfo *v6; // x3
  __int64 v7; // x8
  AssetData_array *v8; // x21
  unsigned __int64 v9; // x24
  BattleServantConfConponent_o *p_DispLog; // x22
  System_String_o *v11; // x2
  System_Int32_array **v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v20; // x0
  __int64 v21; // x0

  v5 = this;
  if ( (byte_42EB7F0 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B5D5C4(&AssetData___TypeInfo, (_DWORD)nameList, (_DWORD)method, v3);
    byte_42EB7F0 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_B5D69C(this, nameList);
  this = (AssetManager_o *)sub_B5D5DC(AssetData___TypeInfo, nameList->max_length);
  v7 = *(_QWORD *)&nameList->max_length;
  v8 = (AssetData_array *)this;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    p_DispLog = (BattleServantConfConponent_o *)&this->fields._DispLog;
    while ( v9 < (unsigned int)v7 )
    {
      v11 = nameList->m_Items[v9];
      if ( v11 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v5->fields.assetBundleReleaseDic, v11, v6);
        if ( this )
        {
          v12 = (System_Int32_array **)this;
          if ( this->fields.requestConfigWriteData )
          {
            if ( !v8 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_B5D684(this, v8->obj.klass->_1.element_class);
            if ( !this )
            {
              v21 = sub_B5D6BC(0LL);
              sub_B5D668(v21, 0LL);
            }
            if ( v9 >= v8->max_length )
              break;
            p_DispLog->klass = (BattleServantConfConponent_c *)v12;
            sub_B5D560(p_DispLog, v12, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      LODWORD(v7) = nameList->max_length;
      ++v9;
      p_DispLog = (BattleServantConfConponent_o *)((char *)p_DispLog + 8);
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
    v20 = sub_B5D6C8(this);
    sub_B5D668(v20, 0LL);
  }
  return v8;
}


bool __fastcall AssetManager__GetAssetStorage_30665960(
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


bool __fastcall AssetManager__GetAsset_30656416(
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


bool __fastcall AssetManager__GetAsset_30656716(
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


AssetData_o *__fastcall AssetManager__GetAsset_30680548(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *v4; // x0

  if ( (byte_42EB7A8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    byte_42EB7A8 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  return v4->static_fields->assetBundleDateVersion;
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
  int v2; // w2
  __int64 v3; // x3
  AssetManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t downloadSize; // x22
  int64_t v9; // x20
  __int64 v10; // x21
  int v11; // w8

  v4 = this;
  if ( (byte_42EB7D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, (_DWORD)method, v2, v3);
    this = (AssetManager_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v5, v6, v7);
    byte_42EB7D5 = 1;
  }
  downloadSize = v4->fields.downloadSize;
  if ( !downloadSize )
LABEL_10:
    sub_B5D69C(this, method);
  v9 = *(_QWORD *)&v4->fields.isErrorDialog;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v10 >= v11 )
      return v9;
    if ( v11 <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = *(AssetManager_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v10 + 32);
    if ( this )
    {
      this = (AssetManager_o *)AssetLoader__get_LoadSize((AssetLoader_o *)this, method);
      downloadSize = v4->fields.downloadSize;
      v9 -= (int)this;
      ++v10;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *v4; // x0

  if ( (byte_42EB7A7 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    byte_42EB7A7 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  return v4->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB7DA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager__InitCR_d__130_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB7DA = 1;
  }
  v5 = sub_B5D694(AssetManager__InitCR_d__130_TypeInfo);
  AssetManager__InitCR_d__130___ctor((AssetManager__InitCR_d__130_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_IEnumerator_o *assetBundleDic; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  char v52; // w23
  const MethodInfo *v53; // x1
  int v54; // w20
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  int v57; // w23
  int64_t downloadSize; // x20
  signed __int64 v59; // x8
  unsigned __int64 v60; // x21
  UnityEngine_Object_o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **Path; // x20
  AssetManager_c *v69; // x8
  struct AssetManager_StaticFields *static_fields; // x0
  const MethodInfo *v71; // x1
  struct AssetManager_StaticFields *v72; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v75; // x0
  System_Int32_array **v76; // x0
  struct AssetManager_StaticFields *v77; // x8
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct AssetManager_StaticFields *v84; // x8
  System_String_o *v85; // x20
  const MethodInfo *v86; // x1
  System_String_o *v87; // x0
  System_Int32_array **v88; // x0
  struct AssetManager_StaticFields *v89; // x8
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct AssetManager_StaticFields *v96; // x8
  System_String_o *v97; // x20
  const MethodInfo *v98; // x1
  System_String_o *v99; // x0
  System_Int32_array **v100; // x0
  struct AssetManager_StaticFields *v101; // x8
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v108; // [xsp+8h] [xbp-78h] BYREF
  int v109[2]; // [xsp+20h] [xbp-60h]
  int v110; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EB7CE & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v38, v39, v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v41,
      v42,
      v43);
    byte_42EB7CE = 1;
  }
  memset(&i, 0, sizeof(i));
  v110 = 0;
  assetBundleDic = (System_Collections_IEnumerator_o *)this->fields.assetBundleDic;
  if ( assetBundleDic )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, assetBundleDic, 0LL);
    this->fields.assetBundleDic = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.assetBundleDic, 0LL, v45, v46, v47, v48, v49, v50);
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    assetResourceDic,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         assetResourceDic,
         (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v54 = 0;
  }
  else
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
    if ( !assetResourceDic )
      goto LABEL_52;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetResourceDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v108,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
      (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v52 = 0;
    for ( i = v108;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &i,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v52 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v53) )
    {
      if ( !i.fields.currentValue )
        sub_B5D69C(0LL, v53);
    }
    v109[0] = 115;
    v110 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &i,
      (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    v110 = 0;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
    if ( !assetResourceDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      assetResourceDic,
      (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v54 = v52 != 0;
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                     assetResourceDic,
                                                                                                     (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  if ( (int)assetResourceDic < 1 )
  {
    if ( !v54 )
      goto LABEL_31;
    goto LABEL_30;
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic,
                                                                                                     (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v108,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v108;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
          &i,
          (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        v54 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v56) )
  {
    if ( !i.fields.currentValue )
      sub_B5D69C(0LL, v56);
  }
  v109[0] = 201;
  v57 = ++v110;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &i,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v57 && v109[v57 - 1] == 201 )
    v110 = v57 - 1;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    assetResourceDic,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( (v54 & 1) != 0 )
LABEL_30:
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v55);
LABEL_31:
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_52;
  LODWORD(v59) = *(_DWORD *)(downloadSize + 24);
  if ( (int)v59 >= 1 )
  {
    v60 = 0LL;
    do
    {
      if ( v60 >= (unsigned int)v59 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v61 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v60 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v61, 0LL);
      downloadSize = this->fields.downloadSize;
      if ( !downloadSize )
        goto LABEL_52;
      v59 = *(int *)(downloadSize + 24);
      ++v60;
    }
    while ( (__int64)v60 < v59 );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.downloadSize,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_AssetLoader__Clear__);
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this[1].klass;
  if ( !assetResourceDic )
LABEL_52:
    sub_B5D69C(assetResourceDic, assetBundleDic);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)assetResourceDic,
    (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  BYTE2(this->fields.writeRequestThread) = 0;
  Path = (System_Int32_array **)AssetStorageCache__GetPath(0LL);
  v69 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v69 = AssetManager_TypeInfo;
  }
  static_fields = v69->static_fields;
  static_fields->cachePathName = (struct System_String_o *)Path;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->cachePathName, Path, v62, v63, v64, v65, v66, v67);
  v72 = AssetManager_TypeInfo->static_fields;
  cachePathName = v72->cachePathName;
  configFileName = v72->configFileName;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v75 = AndroidUtil__ConvertFileNameIfNeed(configFileName, v71);
  v76 = (System_Int32_array **)System_String__Concat_44577788(cachePathName, v75, 0LL);
  v77 = AssetManager_TypeInfo->static_fields;
  v77->cacheListFileName = (struct System_String_o *)v76;
  sub_B5D560((BattleServantConfConponent_o *)&v77->cacheListFileName, v76, v78, v79, v80, v81, v82, v83);
  v84 = AssetManager_TypeInfo->static_fields;
  v85 = v84->cachePathName;
  v87 = AndroidUtil__ConvertFileNameIfNeed(v84->createConfigFileName, v86);
  v88 = (System_Int32_array **)System_String__Concat_44577788(v85, v87, 0LL);
  v89 = AssetManager_TypeInfo->static_fields;
  v89->createCacheListFileName = (struct System_String_o *)v88;
  sub_B5D560((BattleServantConfConponent_o *)&v89->createCacheListFileName, v88, v90, v91, v92, v93, v94, v95);
  v96 = AssetManager_TypeInfo->static_fields;
  v97 = v96->cachePathName;
  v99 = AndroidUtil__ConvertFileNameIfNeed(v96->backConfigFileName, v98);
  v100 = (System_Int32_array **)System_String__Concat_44577788(v97, v99, 0LL);
  v101 = AssetManager_TypeInfo->static_fields;
  v101->backCacheListFileName = (struct System_String_o *)v100;
  sub_B5D560((BattleServantConfConponent_o *)&v101->backCacheListFileName, v100, v102, v103, v104, v105, v106, v107);
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
    sub_B5D560((BattleServantConfConponent_o *)p_assetBundleDic, (System_Int32_array **)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088(
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
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0

  if ( (byte_42EB7EB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
      (_DWORD)name,
      (_DWORD)method,
      v3);
    byte_42EB7EB = 1;
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    sub_B5D69C(0LL, name);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetBundleReleaseDic,
           (System_Xml_XmlQualifiedName_o *)name,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_30658880(
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
    sub_B5D69C(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 < 1 )
    return 1;
  v5 = this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
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


bool __fastcall AssetManager__IsNeedDownload_30659440(
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
    sub_B5D69C(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetResourceDic; // x0
  int v63; // w21
  _BOOL8 v64; // x0
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x2
  float v67; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v70; // x0
  AssetManager_c *v71; // x0
  AssetManager_c *v72; // x0
  AssetManager_c *v73; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v76; // x21
  __int64 v77; // x0
  __int64 v78; // x1
  AssetManager_c *v79; // x0
  AssetManager_c *v80; // x0
  AssetManager_c *v81; // x0
  AssetManager_c *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v90; // x0
  System_IO_IOException_o *v91; // x20
  System_String_o *v92; // x0
  __int64 v93; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v94; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v95; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EB7DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetManager_OnClickRetryDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CommonServicePluginScript_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&ManagementManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&System_IO_StreamWriter_TypeInfo, v41, v42, v43);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v44,
      v45,
      v46);
    sub_B5D5C4(&StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_15935/*"[FFFF80]Download error for debug"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_11718/*"SCRIPT"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_1/*""*/, v59, v60, v61);
    byte_42EB7DF = 1;
  }
  memset(&v95, 0, sizeof(v95));
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_58;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                  assetResourceDic,
                                                                                                  (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetResourceDic )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v94,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v63 = 0;
  v95 = v94;
  while ( 1 )
  {
    v64 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v95,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v64 )
      break;
    if ( !v95.fields.currentValue )
      sub_B5D69C(v64, v65);
    if ( !HIDWORD(v95.fields.currentValue[5].klass) && v95.fields.currentValue[4].monitor )
      v63 |= AssetData__ReleaseData((AssetData_o *)v95.fields.currentValue, v65);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v95,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v63 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v66);
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
LABEL_58:
    sub_B5D69C(assetResourceDic, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetResourceDic,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( *(float *)&this->fields.processingAssetLoaderList >= 0.0 )
  {
    v67 = *(float *)&this->fields.processingAssetLoaderList - UnityEngine_Time__get_deltaTime(0LL);
    *(float *)&this->fields.processingAssetLoaderList = v67;
    if ( v67 <= 0.0 && !LOBYTE(this->fields.writeRequestThread) )
    {
      Path = AssetStorageCache__GetPath(0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v70 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v70 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v70->static_fields->LIMIT_FREE_SIZE )
        {
          v90 = sub_B5D5C8(&System_IO_IOException_TypeInfo);
          v91 = (System_IO_IOException_o *)sub_B5D694(v90);
          v92 = (System_String_o *)sub_B5D5C8(&StringLiteral_5396/*"Disk full"*/);
          System_IO_IOException___ctor_39731552(v91, v92, 0LL);
          v93 = sub_B5D5C8(&Method_AssetManager_LateUpdate__);
          sub_B5D668(v91, v93);
        }
      }
      v71 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v71 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v71->static_fields->createCacheListFileName, 0LL) )
      {
        v72 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v72 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v72->static_fields->createCacheListFileName, 0LL);
      }
      v73 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v73 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v73->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v76 = (System_IO_StreamWriter_o *)sub_B5D694(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_44628260(v76, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v76 )
        sub_B5D69C(v77, v78);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, _QWORD, Il2CppMethodPointer))v76->klass->vtable._16_Write.method)(
        v76,
        *(_QWORD *)&this->fields.requestWriteCounter,
        v76->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v76->klass->vtable._8_Close.method)(
        v76,
        v76->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v79 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v79 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v79->static_fields->backCacheListFileName, 0LL);
      }
      v80 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v80 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v80->static_fields->cacheListFileName, 0LL) )
      {
        v81 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v81 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v81->static_fields->cacheListFileName, v81->static_fields->backCacheListFileName, 0LL);
      }
      v82 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v82 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v82->static_fields->createCacheListFileName, v82->static_fields->cacheListFileName, 0LL);
      v83 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v83, v84, v85, v86, v87, v88, v89);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  AssetData_o *AssetData; // x0
  int32_t entryCount; // w8
  AssetData_o *v11; // x20
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w8

  v5 = this;
  if ( (byte_42EB7F1 & 1) == 0 )
  {
    sub_B5D5C4(&AssetData_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Add__,
                               v6,
                               v7,
                               v8);
    byte_42EB7F1 = 1;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                (System_Collections_Generic_Dictionary_string__AssetData__o *)v5->fields.requestConfigWriteData,
                name,
                v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v11 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v11 = (AssetData_o *)sub_B5D694(AssetData_TypeInfo);
    AssetData___ctor(v11, 1, name, v12);
    if ( !v11 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v11, v14) )
      return 0LL;
    v15 = v11->fields.entryCount;
    if ( (v15 & 0x80000000) == 0 )
      v11->fields.entryCount = v15 + 1;
    requestConfigWriteData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.requestConfigWriteData;
    if ( !requestConfigWriteData )
LABEL_14:
      sub_B5D69C(requestConfigWriteData, v14);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (System_Xml_Schema_XmlSchemaObject_o *)v11,
      (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
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
  if ( (byte_42EB7EC & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               (_DWORD)name,
                               (_DWORD)callbackFunc,
                               *(_QWORD *)&loadParallelMax);
    byte_42EB7EC = 1;
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
      sub_B5D69C(0LL, v10);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      assetResourceDic,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
    AssetManager__AddLoadWaitStatus_30679660(v8, v22, callbackFunc, 0LL, v21);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__LoadAssetStorage_30664292(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x21
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AssetStorage; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x23
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x4
  __int64 v61; // x8
  int v62; // w26
  unsigned __int64 v63; // x27
  AssetLoader_LoadEndDataHandler_o **v64; // x23
  bool v65; // w25
  System_String_o *v66; // x24
  AssetLoader_LoadEndDataHandler_o *v67; // x25
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x1
  __int64 v76; // x0

  if ( (byte_42EB7EE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_string__AddRange__,
      (_DWORD)nameList,
      (_DWORD)callbackFunc,
      *(_QWORD *)&loadParallelMax);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__IndexOf__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__, v30, v31, v32);
    sub_B5D5C4(&AssetManager___c__DisplayClass168_0_TypeInfo, v33, v34, v35);
    byte_42EB7EE = 1;
  }
  v36 = sub_B5D694(AssetManager___c__DisplayClass168_0_TypeInfo);
  AssetManager___c__DisplayClass168_0___ctor((AssetManager___c__DisplayClass168_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_32;
  *(_QWORD *)(v36 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 40), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 48) = callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 48),
    (System_Int32_array **)callbackFunc,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  *(_DWORD *)(v36 + 56) = loadParallelMax;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v52 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v36 + 24);
  *(_QWORD *)(v36 + 24) = v51;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 24), (System_Int32_array **)v51, v53, v54, v55, v56, v57, v58);
  AssetStorage = *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v36 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v36 + 16) = 0,
        *(_BYTE *)(v36 + 32) = 0,
        !nameList) )
  {
LABEL_32:
    sub_B5D69C(AssetStorage, v38);
  }
  v61 = *(_QWORD *)&nameList->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = 0;
    v63 = 0LL;
    v64 = (AssetLoader_LoadEndDataHandler_o **)(v36 + 64);
    v65 = 1;
    while ( 1 )
    {
      if ( v63 >= (unsigned int)v61 )
      {
        v76 = sub_B5D6C8(AssetStorage);
        sub_B5D668(v76, 0LL);
      }
      v66 = nameList->m_Items[v63];
      if ( !v66 )
      {
        AssetStorage = *v52;
        if ( !*v52 )
          goto LABEL_32;
        AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)AssetStorage,
                                                                                           0LL,
                                                                                           (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v65 )
        goto LABEL_22;
      v67 = *v64;
      if ( !*v64 )
      {
        v67 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v67,
          (Il2CppObject *)v36,
          Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__,
          0LL);
        *(_QWORD *)(v36 + 64) = v67;
        sub_B5D560((BattleServantConfConponent_o *)(v36 + 64), (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
      }
      if ( !this )
        goto LABEL_32;
      AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)AssetManager__LoadAssetStorage(
                                                                                         this,
                                                                                         v66,
                                                                                         v67,
                                                                                         *(_DWORD *)(v36 + 56),
                                                                                         v60);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v62;
      v65 = 1;
LABEL_23:
      LODWORD(v61) = nameList->max_length;
      if ( (__int64)++v63 >= (int)v61 )
        goto LABEL_26;
    }
    AssetStorage = *v52;
    if ( !*v52 )
      goto LABEL_32;
    AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                                                                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)AssetStorage,
                                                                                       (WarBoardManager_TaskList_o *)v66,
                                                                                       (const MethodInfo_3058070 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v38 = (unsigned int)AssetStorage;
      AssetStorage = *v52;
      if ( !*v52 )
        goto LABEL_32;
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)AssetStorage,
        v38,
        AssetStorage->fields._size - v38,
        (const MethodInfo_3058D54 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v65 = 0;
    goto LABEL_23;
  }
  v62 = 0;
  v65 = 1;
LABEL_26:
  if ( v62 < 1 || !*(_BYTE *)(v36 + 32) && *(_DWORD *)(v36 + 16) == v62 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v36 + 48), v59);
    HIDWORD(this->fields.unloadCallbacks) = *(_DWORD *)(v36 + 56);
    *(_BYTE *)(v36 + 32) = 1;
    AssetManager__LoadStart(this, v74);
  }
  return v65;
}


bool __fastcall AssetManager__LoadAsset_30680300(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_String_o *errorMessage; // x8

  if ( (byte_42EB7CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB7CD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance->fields.webViewBase) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      errorMessage = Instance->fields.errorMessage;
      if ( errorMessage )
        return SLODWORD(errorMessage[1].klass) > 0;
    }
LABEL_9:
    sub_B5D69C(Instance, v8);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  AssetData_o *v29; // x0
  AssetData_o *AssetData; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x4
  AssetData_o *v33; // x24
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v36; // x0
  AssetData_o *v37; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v39; // x3
  AssetData_o *v40; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x24
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v43; // x8
  unsigned __int64 v44; // x27
  int max_length; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x25
  __int64 v47; // x23
  int32_t v48; // w9
  int size; // w8
  System_String_array *v50; // x0
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x1
  __int64 v53; // x0
  AssetData_o *v55; // [xsp+8h] [xbp-58h]

  if ( (byte_42EB7ED & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
      (_DWORD)name,
      (_DWORD)resourceNames,
      callbackFunc);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v26, v27, v28);
    byte_42EB7ED = 1;
  }
  LOBYTE(v29) = 0;
  if ( name && resourceNames )
  {
    if ( *(_QWORD *)&resourceNames->max_length )
    {
      AssetData = AssetManager__GetAssetData(0LL, this->fields.assetResourceDic, name, (const MethodInfo *)callbackFunc);
      if ( AssetData )
      {
        v33 = AssetData;
        assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetResourceDic;
        if ( !assetResourceDic )
          goto LABEL_43;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
          assetResourceDic,
          (System_Xml_XmlQualifiedName_o *)name,
          (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v33->fields.objectList )
        {
          entryCount = v33->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v33->fields.entryCount = entryCount + 1;
          if ( !callbackFunc )
            goto LABEL_39;
          v36 = callbackFunc;
          v37 = v33;
LABEL_13:
          AssetLoader_LoadEndDataHandler__Invoke(v36, v37, 0LL);
LABEL_39:
          LOBYTE(v29) = 1;
          return (char)v29;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v32);
      if ( Status )
        goto LABEL_39;
      v29 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v39);
      if ( v29 )
      {
        v40 = v29;
        v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v41,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v40->fields.objectList;
        if ( objectList )
        {
          v43 = *(_QWORD *)&resourceNames->max_length;
          v55 = v40;
          if ( (int)v43 >= 1 )
          {
            v44 = 0LL;
            while ( 1 )
            {
              if ( v44 >= (unsigned int)v43 )
                goto LABEL_44;
              max_length = objectList->max_length;
              v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)resourceNames->m_Items[v44];
              if ( max_length >= 1 )
                break;
LABEL_27:
              if ( !v41 )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v41,
                v46,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_29:
              LODWORD(v43) = resourceNames->max_length;
              if ( (__int64)++v44 >= (int)v43 )
                goto LABEL_30;
            }
            v47 = 0LL;
            while ( (unsigned int)v47 < max_length )
            {
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)objectList->m_Items[v47];
              if ( !assetResourceDic )
                goto LABEL_43;
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)assetResourceDic, 0LL);
              if ( !v46 )
                goto LABEL_43;
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_String__Equals_44565128((System_String_o *)v46, (System_String_o *)assetResourceDic, 0LL);
              if ( ((unsigned __int8)assetResourceDic & 1) != 0 )
                goto LABEL_29;
              max_length = objectList->max_length;
              if ( (int)++v47 >= max_length )
                goto LABEL_27;
            }
LABEL_44:
            v53 = sub_B5D6C8(assetResourceDic);
            sub_B5D668(v53, 0LL);
          }
LABEL_30:
          v40 = v55;
          if ( !v41 )
LABEL_43:
            sub_B5D69C(assetResourceDic, v31);
        }
        else
        {
          if ( !v41 )
            goto LABEL_43;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v41,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v48 = v40->fields.entryCount;
        size = v41->fields._size;
        if ( (v48 & 0x80000000) == 0 )
          v40->fields.entryCount = v48 + 1;
        if ( size >= 1 )
        {
          v50 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_30679660(this, v40, callbackFunc, v50, v51);
          HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
          AssetManager__LoadStart(this, v52);
          goto LABEL_39;
        }
        if ( !callbackFunc )
          goto LABEL_39;
        v36 = callbackFunc;
        v37 = v40;
        goto LABEL_13;
      }
    }
    else
    {
      LOBYTE(v29) = 0;
    }
  }
  return (char)v29;
}


bool __fastcall AssetManager__LoadStart(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  __int64 v44; // x20
  int64_t downloadSize; // x0
  const MethodInfo *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // w2
  __int64 v54; // x3
  AssetManager_c *klass; // x8
  int64_t v58; // x8
  System_Int32_array **ProxyData___Dequeue; // x0
  __int64 v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_o *Name; // x0
  System_Action_o *v68; // x0
  System_Int32_array **v69; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  const MethodInfo *v84; // x2
  AssetLoader_LoadEndDataHandler_o *v85; // x1
  System_Action_o *v86; // x19
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EB7E7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v32, v33, v34);
    sub_B5D5C4(&Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__, v35, v36, v37);
    sub_B5D5C4(&AssetManager___c__DisplayClass147_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_5311/*"DelayLoadStart"*/, v41, v42, v43);
    byte_42EB7E7 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v44 = sub_B5D694(AssetManager___c__DisplayClass147_0_TypeInfo);
  AssetManager___c__DisplayClass147_0___ctor((AssetManager___c__DisplayClass147_0_o *)v44, 0LL);
  if ( !v44 )
    goto LABEL_42;
  *(_QWORD *)(v44 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v44 + 16), (System_Int32_array **)this, v47, v48, v49, v50, v51, v52);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42E5FA0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)v46, v53, v54);
    byte_42E5FA0 = 1;
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
      &v87,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)downloadSize,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v88 = v87;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v88,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v88,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_42;
  if ( SLODWORD(klass->_1.byval_arg.data) < 1 )
    return 0;
  v58 = this->fields.downloadSize;
  if ( !v58 )
    goto LABEL_42;
  if ( *(_DWORD *)(v58 + 24) >= SHIDWORD(this->fields.unloadCallbacks) )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5311/*"DelayLoadStart"*/,
    0LL);
  downloadSize = (int64_t)this[1].klass;
  if ( !downloadSize
    || (ProxyData___Dequeue = (System_Int32_array **)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                       (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)downloadSize,
                                                       (const MethodInfo_2B9E6B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v44 + 24) = ProxyData___Dequeue,
        v60 = v44 + 24,
        sub_B5D560((BattleServantConfConponent_o *)(v44 + 24), ProxyData___Dequeue, v61, v62, v63, v64, v65, v66),
        (downloadSize = *(_QWORD *)(v44 + 24)) == 0) )
  {
LABEL_42:
    sub_B5D69C(downloadSize, v46);
  }
  Name = AssetManager_LoadWaitStatus__get_Name((AssetManager_LoadWaitStatus_o *)downloadSize, 0LL);
  downloadSize = System_String__IsNullOrEmpty(Name, 0LL);
  if ( (downloadSize & 1) == 0 )
  {
    downloadSize = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( downloadSize )
    {
      v69 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)downloadSize,
                                     (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v44 + 32) = v69;
      v70 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v44 + 32);
      sub_B5D560((BattleServantConfConponent_o *)(v44 + 32), v69, v71, v72, v73, v74, v75, v76);
      downloadSize = this->fields.downloadSize;
      if ( downloadSize )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadSize,
          *v70,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetLoader__Add__);
        if ( *(_QWORD *)v60 )
        {
          downloadSize = (int64_t)*v70;
          if ( *v70 )
          {
            v83 = *(System_Int32_array ***)(*(_QWORD *)v60 + 16LL);
            *(_QWORD *)(downloadSize + 24) = v83;
            sub_B5D560((BattleServantConfConponent_o *)(downloadSize + 24), v83, v77, v78, v79, v80, v81, v82);
            if ( *(_QWORD *)v60 )
            {
              downloadSize = (int64_t)*v70;
              if ( *v70 )
              {
                v85 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v60 + 32LL);
                if ( v85 )
                  AssetLoader__add_endCallback2((AssetLoader_o *)downloadSize, v85, v84);
                v86 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(
                  v86,
                  (Il2CppObject *)v44,
                  Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__,
                  0LL);
                if ( v86 )
                {
                  System_Action__Invoke(v86, 0LL);
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
  if ( !*(_QWORD *)v60 )
    goto LABEL_42;
  v68 = *(System_Action_o **)(*(_QWORD *)v60 + 24LL);
  if ( v68 )
    System_Action__Invoke(v68, 0LL);
  return AssetManager__LoadStart(this, v46);
}


void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ManagementManager_c *v9; // x0
  ManagementManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_42EB7DB & 1) == 0 )
  {
    sub_B5D5C4(&ManagementManager_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6, v7, v8);
    byte_42EB7DB = 1;
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
    if ( !byte_42E5AE3 )
    {
      sub_B5D5C4(&ManagementManager_TypeInfo, isDecide, (_DWORD)method, v3);
      byte_42E5AE3 = 1;
    }
    v9 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v9 = ManagementManager_TypeInfo;
    }
    if ( v9->static_fields->isDuringStartup )
    {
      UnityEngine_Application__Quit_41546252(0LL);
    }
    else
    {
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v11);
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
  __int64 v3; // x3
  AssetManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int64_t downloadSize; // x22
  _BOOL4 isRequestDownload; // w23
  unsigned __int64 v17; // x21
  UnityEngine_Object_o *v18; // x22
  struct AssetData_o *data; // x8

  v5 = this;
  if ( (byte_42EB7E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, (_DWORD)loader, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v9, v10, v11);
    this = (AssetManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EB7E9 = 1;
  }
  if ( !loader )
    goto LABEL_14;
  downloadSize = v5->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_14;
  isRequestDownload = loader->fields.isRequestDownload;
  v17 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v17 >= *(int *)(downloadSize + 24) )
      goto LABEL_18;
    if ( v17 >= *(unsigned int *)(downloadSize + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v18 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v17 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(v18, (UnityEngine_Object_o *)loader, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    downloadSize = v5->fields.downloadSize;
    ++v17;
    if ( !downloadSize )
      goto LABEL_14;
  }
  data = loader->fields.data;
  if ( !data
    || (this = (AssetManager_o *)v5->fields.downloadSize,
        *(_QWORD *)&v5->fields.isErrorDialog -= data->fields.size,
        !this) )
  {
LABEL_14:
    sub_B5D69C(this, loader);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    v17,
    (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
LABEL_18:
  if ( isRequestDownload )
  {
    if ( *(_QWORD *)&v5->fields.reserveWriteRequest )
      LOBYTE(v5->fields.unloadCallbacks) = 1;
    else
      AssetManager__StartThreadConfigWriteRequest(v5, (const MethodInfo *)loader);
  }
  AssetManager__LoadStart(v5, (const MethodInfo *)loader);
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

  if ( (byte_42EB7EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, type, (_DWORD)name, method);
    byte_42EB7EA = 1;
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
        sub_B5D69C(0LL, v11);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)requestConfigWriteData,
        (System_Xml_XmlQualifiedName_o *)v9->fields.name,
        (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_42EB7F2 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               (_DWORD)name,
                               (_DWORD)method,
                               v3);
    byte_42EB7F2 = 1;
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
      sub_B5D69C(0LL, v8);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_30666304(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( !nameList )
    sub_B5D69C(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
      }
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall AssetManager__ReleaseAsset_30657428(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x0

  if ( !nameList )
    sub_B5D69C(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
      {
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
      }
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_30657748(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_30657948(
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
    sub_B5D69C(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
      {
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
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
  __int64 v3; // x3
  AssetManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  v5 = this;
  if ( (byte_42EB7E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, (_DWORD)info, (_DWORD)method, v3);
    this = (AssetManager_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v6,
                               v7,
                               v8);
    byte_42EB7E6 = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && info->fields.objectList )
  {
    this = (AssetManager_o *)v5->fields.assetResourceDic;
    if ( !this )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
            (System_Xml_XmlQualifiedName_o *)info->fields.name,
            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v5->fields.assetResourceDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)info->fields.name,
          (System_Xml_Schema_XmlSchemaObject_o *)info,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_B5D69C(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall AssetManager__ResetAssetStorageVersion(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v22; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x8
  System_String_o *v24; // x19
  Il2CppObject *currentValue; // x21
  System_String_o *monitor; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB7D7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v18, v19, v20);
    byte_42EB7D7 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_44577788(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_885/*"/"*/,
                                                                                      0LL);
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (v24 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                    (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_B5D69C(Values, v22);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v29,
    Values,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v29,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v27 )
      break;
    currentValue = v29.fields.currentValue;
    if ( !v29.fields.currentValue )
      sub_B5D69C(v27, v28);
    monitor = (System_String_o *)v29.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v28);
    if ( System_String__StartsWith(monitor, v24, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v29,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagerConfig_c *v7; // x0
  AssetManager_c *v8; // x0

  if ( (byte_42EB79C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    byte_42EB79C = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseStandaloneAsset )
  {
    v8 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v8 = AssetManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v8->static_fields->SAVE_KEY, v8->static_fields->SAVE_DATA_OFFLINE, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall AssetManager__SetOnlineStatus(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagerConfig_c *v7; // x0
  AssetManager_c *v8; // x0
  System_String_o *String; // x0
  AssetManager_c *v11; // x0

  if ( (byte_42EB79D & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    byte_42EB79D = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseStandaloneAsset )
    return 0;
  v8 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v8 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v8->static_fields->SAVE_KEY, v8->static_fields->SAVE_DATA_OFFLINE, 0LL);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL) )
    return 0;
  v11 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v11 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v11->static_fields->SAVE_KEY, v11->static_fields->SAVE_DATA_ONLINE, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall AssetManager__SetupAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB7CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42EB7CF = 1;
  }
  memset(&v21, 0, sizeof(v21));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B5D69C(assetBundleReleaseDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v21,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    if ( !v21.fields.currentValue )
      sub_B5D69C(v18, v19);
    if ( LODWORD(v21.fields.currentValue[2].monitor) != HIDWORD(v21.fields.currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_30669584(this, (AssetData_o *)v21.fields.currentValue, v20);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v21,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Threading_ThreadStart_o *v11; // x20
  System_Threading_Thread_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  System_Threading_Thread_o *v20; // x0

  if ( (byte_42EB7DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetManager_ConfigWriteRequestThread__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Threading_ThreadStart_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Threading_Thread_TypeInfo, v8, v9, v10);
    byte_42EB7DD = 1;
  }
  LOBYTE(this->fields.unloadCallbacks) = 0;
  v11 = (System_Threading_ThreadStart_o *)sub_B5D694(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v11, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v12 = (System_Threading_Thread_o *)sub_B5D694(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v12, v11, 0LL);
  *(_QWORD *)&this->fields.reserveWriteRequest = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reserveWriteRequest,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v20 = *(System_Threading_Thread_o **)&this->fields.reserveWriteRequest;
  if ( !v20 )
    sub_B5D69C(0LL, v19);
  System_Threading_Thread__Start(v20, 0LL);
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
        const MethodInfo_1AD0D68 *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AssetData_o *AssetStorage; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  Il2CppObject *v18; // x1
  Il2CppObject *v19; // x19

  if ( (byte_42EA238 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)path, (_DWORD)name, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EA238 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    v18 = (Il2CppObject *)((__int64 (__fastcall *)(AssetData_o *, System_String_o *))method->rgctx_data->_0_AssetData_GetObject_T_->methodPointer)(
                            AssetStorage,
                            name);
  else
    v18 = 0LL;
  *data = v18;
  sub_B5D560((BattleServantConfConponent_o *)data, (System_Int32_array **)v18, v12, v13, v14, v15, v16, v17);
  v19 = *data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Object_o *v32; // x19

  if ( (byte_42EB7F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, (_DWORD)atlasName, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42EB7F3 = 1;
  }
  *atlas = 0LL;
  sub_B5D560(
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
  AssetStorage = AssetManager__getAssetStorage(name, v20);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               AssetStorage,
                                                               atlasName,
                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  else
    Object_WarBoardWaitTimeSetting = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  if ( v23 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B5D69C(v23, v24);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)atlas,
      (System_Int32_array **)Component_srcLineSprite,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (UnityEngine_Object_o *)*atlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB79A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB79A = 1;
  }
  v5 = sub_B5D694(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
    (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__117_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t downloadSize; // x8

  v4 = this;
  if ( (byte_42EB7F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (AssetManager_o *)sub_B5D5C4(&StringLiteral_9448/*"NOW_LOADING"*/, v8, v9, v10);
    byte_42EB7F7 = 1;
  }
  downloadSize = v4->fields.downloadSize;
  if ( !downloadSize )
    sub_B5D69C(this, method);
  if ( *(int *)(downloadSize + 24) >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm((System_String_o *)StringLiteral_9448/*"NOW_LOADING"*/, 0LL);
  }
}


void __fastcall AssetManager__add_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x20
  System_Delegate_o *v7; // x21
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AssetManager_o *v12; // x0
  AssetManager_ResourceUnloadEventHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB798 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_ResourceUnloadEventHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB798 = 1;
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  v7 = (System_Delegate_o *)downLoadWaitList;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v9->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_downLoadWaitList, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  AssetManager__remove_unloadCallbacks(v12, v13, v14);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EB7BB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB7BB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v9);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB7DE & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager__coUnloadUnusedAssets_d__137_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB7DE = 1;
  }
  v5 = sub_B5D694(AssetManager__coUnloadUnusedAssets_d__137_TypeInfo);
  AssetManager__coUnloadUnusedAssets_d__137___ctor((AssetManager__coUnloadUnusedAssets_d__137_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
      return System_String__Equals_44565128(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_44565128((System_String_o *)list1, v8, 0LL);
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
      v9 = sub_B5D6C8(list1);
      sub_B5D668(v9, 0LL);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_30655420(
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
              sub_B5D69C(0LL, v9);
            assetList = (AssetData_array *)System_String__Equals_44565128(name, v9, 0LL);
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
      v11 = sub_B5D6C8(assetList);
      sub_B5D668(v11, 0LL);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_30655140(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t m_stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_44565128(v3, name, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EB7A0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB7A0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    AssetManager__DebugLog((AssetManager_o *)Instance, v9);
  }
}


bool __fastcall AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EB7BE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, maxParallelLoad, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8, v9);
    byte_42EB7BE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v13);
}


bool __fastcall AssetManager__downloadAssetStorage_30662148(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_42EB7BF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    byte_42EB7BF = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v10, v11);
  return AssetManager__DownloadAssetStorage_30662352((AssetManager_o *)Instance, nameList, callbackFunc, 1, v12);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB7AD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    byte_42EB7AD = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v10 )
    return 0LL;
  if ( !Instance )
    sub_B5D69C(v10, v11);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v12);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  bool v11; // w8
  AssetData_o *result; // x0

  if ( (byte_42EB7CA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7CA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
  {
    if ( !Instance )
      sub_B5D69C(0LL, v9);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.callbackFunc,
               name,
               v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  bool v11; // w8
  AssetData_o *result; // x0

  if ( (byte_42EB7C4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7C4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
  {
    if ( !Instance )
      sub_B5D69C(0LL, v9);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
               name,
               v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7B9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B9 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0LL;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v11);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_30665292(
        System_String_array *nameList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7C5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7C5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0LL;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return AssetManager__GetAssetStorage_30665472((AssetManager_o *)Instance, nameList, v11);
}


bool __fastcall AssetManager__getAssetStorage_30665760(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB7C6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    byte_42EB7C6 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v10, v11);
  return AssetManager__GetAssetStorage_30665960((AssetManager_o *)Instance, name, callbackFunc, v12);
}


bool __fastcall AssetManager__getAsset_30656208(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EB7AE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8, v9);
    byte_42EB7AE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return AssetManager__GetAsset_30656416((AssetManager_o *)Instance, type, name, callbackFunc, v13);
}


bool __fastcall AssetManager__getAsset_30656516(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB7AF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    byte_42EB7AF = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v10, v11);
  return AssetManager__GetAsset_30656716((AssetManager_o *)Instance, name, callbackFunc, v12);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EB7B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB7B4 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !Instance )
    sub_B5D69C(v8, v9);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v9);
}


System_String_o *__fastcall AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v20; // x21
  System_Text_UTF8Encoding_o *v21; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v23; // x1
  System_Byte_array *v24; // x20
  System_Text_StringBuilder_o *v25; // x19
  __int64 v26; // x8
  unsigned __int64 v27; // x21
  __int64 v29; // x0
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EB7AA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Text_UTF8Encoding_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23793/*"{0,0:x2}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_842/*".bin"*/, v17, v18, v19);
    byte_42EB7AA = 1;
  }
  v20 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B5D694(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v20, 0LL);
  v21 = (System_Text_UTF8Encoding_o *)sub_B5D694(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v21->klass->vtable._18_GetBytes.method)(
                                              v21,
                                              name,
                                              v21->klass->vtable._19_GetBytes.methodPtr);
  if ( !v20 )
    goto LABEL_13;
  v24 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43923624(
          (System_Security_Cryptography_HashAlgorithm_o *)v20,
          (System_Byte_array *)appended,
          0LL);
  v25 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v25, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v20, 0LL);
  if ( !v24 )
    goto LABEL_13;
  v26 = *(_QWORD *)&v24->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
      {
        v29 = sub_B5D6C8(appended);
        sub_B5D668(v29, 0LL);
      }
      v30 = v24->m_Items[v27 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      if ( !v25 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v25,
                   (System_String_o *)StringLiteral_23793/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v26) = v24->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_11;
    }
LABEL_13:
    sub_B5D69C(appended, v23);
  }
LABEL_11:
  if ( !v25 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_42953744(v25, (System_String_o *)StringLiteral_842/*".bin"*/, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v25->klass->vtable._3_ToString.method)(
                              v25,
                              v25->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  NetworkManager_c *v11; // x0
  NetworkManager_c *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int64_t v16; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB7A9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1557/*"?t="*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_20290/*"jar:"*/, v8, v9, v10);
    byte_42EB7A9 = 1;
  }
  v16 = 0LL;
  v11 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !url )
    sub_B5D69C(v11, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v12 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v12 = NetworkManager_TypeInfo;
    }
    v13 = System_String__Concat_44577788(
            (System_String_o *)StringLiteral_20290/*"jar:"*/,
            v12->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(url, v13, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v16 = NetworkManager__getTime(0LL) / 300;
      v14 = System_Int64__ToString((int64_t)&v16, 0LL);
      return System_String__Concat_44580072(url, (System_String_o *)StringLiteral_1557/*"?t="*/, v14, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_30635040(AssetData_o *data, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  AssetManager_c *v20; // x0
  System_String_o *DataServerAddress; // x0
  const MethodInfo *v22; // x1
  System_String_o *v23; // x20
  System_String_o *DownloadName; // x0
  System_Int32_array **v25; // x21
  NetworkManager_c *v26; // x0
  System_String_o *v27; // x0
  System_String_array *v28; // x20
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **assetBundleDateVersion; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x19
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB7AB & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_20290/*"jar:"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1558/*"?v="*/, v17, v18, v19);
    byte_42EB7AB = 1;
  }
  v95 = 0LL;
  v20 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v20);
  if ( !data )
    goto LABEL_56;
  v23 = DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v22);
  DataServerAddress = System_String__Concat_44577788(v23, DownloadName, 0LL);
  v25 = (System_Int32_array **)DataServerAddress;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !v25 )
    goto LABEL_56;
  if ( !System_String__StartsWith((System_String_o *)v25, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v26 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v26 = NetworkManager_TypeInfo;
    }
    v27 = System_String__Concat_44577788(
            (System_String_o *)StringLiteral_20290/*"jar:"*/,
            v26->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith((System_String_o *)v25, v27, 0LL) )
    {
      DataServerAddress = (System_String_o *)sub_B5D5DC(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v28 = (System_String_array *)DataServerAddress;
        v29 = (System_Int32_array **)sub_B5D684(v25, DataServerAddress->klass->_1.element_class);
        if ( !v29 )
          goto LABEL_58;
        if ( !v28->max_length )
          goto LABEL_57;
        v28->m_Items[0] = (System_String_o *)v25;
        sub_B5D560((BattleServantConfConponent_o *)v28->m_Items, v25, v30, v31, v32, v33, v34, v35);
        v29 = (System_Int32_array **)StringLiteral_1558/*"?v="*/;
        if ( StringLiteral_1558/*"?v="*/ )
        {
          v29 = (System_Int32_array **)sub_B5D684(StringLiteral_1558/*"?v="*/, v28->obj.klass->_1.element_class);
          if ( !v29 )
            goto LABEL_58;
          v42 = (System_Int32_array **)StringLiteral_1558/*"?v="*/;
        }
        else
        {
          v42 = 0LL;
        }
        if ( v28->max_length <= 1 )
          goto LABEL_57;
        v28->m_Items[1] = (System_String_o *)v42;
        sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
        v29 = (System_Int32_array **)AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v29 = (System_Int32_array **)AssetManager_TypeInfo;
        }
        v49 = *(System_Int32_array ***)&v29[23]->m_Items[13];
        if ( !v49 || (v29 = (System_Int32_array **)sub_B5D684(v49, v28->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v28->max_length <= 2 )
            goto LABEL_57;
          v28->m_Items[2] = (System_String_o *)v49;
          sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
          v29 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
          if ( StringLiteral_16096/*"_"*/ )
          {
            v29 = (System_Int32_array **)sub_B5D684(StringLiteral_16096/*"_"*/, v28->obj.klass->_1.element_class);
            if ( !v29 )
              goto LABEL_58;
            v56 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
          }
          else
          {
            v56 = 0LL;
          }
          if ( v28->max_length <= 3 )
            goto LABEL_57;
          v28->m_Items[3] = (System_String_o *)v56;
          sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
          assetBundleDateVersion = (System_Int32_array **)AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
          if ( !assetBundleDateVersion
            || (v29 = (System_Int32_array **)sub_B5D684(assetBundleDateVersion, v28->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v28->max_length <= 4 )
              goto LABEL_57;
            v28->m_Items[4] = (System_String_o *)assetBundleDateVersion;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v28->m_Items[4],
              assetBundleDateVersion,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62);
            v29 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
            if ( StringLiteral_16096/*"_"*/ )
            {
              v29 = (System_Int32_array **)sub_B5D684(StringLiteral_16096/*"_"*/, v28->obj.klass->_1.element_class);
              if ( !v29 )
                goto LABEL_58;
              v70 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
            }
            else
            {
              v70 = 0LL;
            }
            if ( v28->max_length <= 5 )
              goto LABEL_57;
            v28->m_Items[5] = (System_String_o *)v70;
            sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[5], v70, v64, v65, v66, v67, v68, v69);
            HIDWORD(v95) = data->fields.size;
            v29 = (System_Int32_array **)System_Int32__ToString((int32_t)&v95 + 4, 0LL);
            v77 = v29;
            if ( !v29 || (v29 = (System_Int32_array **)sub_B5D684(v29, v28->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v28->max_length <= 6 )
                goto LABEL_57;
              v28->m_Items[6] = (System_String_o *)v77;
              sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[6], v77, v71, v72, v73, v74, v75, v76);
              v29 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
              if ( StringLiteral_16096/*"_"*/ )
              {
                v29 = (System_Int32_array **)sub_B5D684(StringLiteral_16096/*"_"*/, v28->obj.klass->_1.element_class);
                if ( !v29 )
                  goto LABEL_58;
                v84 = (System_Int32_array **)StringLiteral_16096/*"_"*/;
              }
              else
              {
                v84 = 0LL;
              }
              if ( v28->max_length <= 7 )
                goto LABEL_57;
              v28->m_Items[7] = (System_String_o *)v84;
              sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[7], v84, v78, v79, v80, v81, v82, v83);
              LODWORD(v95) = data->fields.crc;
              v29 = (System_Int32_array **)System_UInt32__ToString((uint32_t)&v95, 0LL);
              v91 = v29;
              if ( !v29 || (v29 = (System_Int32_array **)sub_B5D684(v29, v28->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v28->max_length > 8 )
                {
                  v28->m_Items[8] = (System_String_o *)v91;
                  sub_B5D560((BattleServantConfConponent_o *)&v28->m_Items[8], v91, v85, v86, v87, v88, v89, v90);
                  return System_String__Concat_44657912(v28, 0LL);
                }
LABEL_57:
                v93 = sub_B5D6C8(v29);
                sub_B5D668(v93, 0LL);
              }
            }
          }
        }
LABEL_58:
        v94 = sub_B5D6BC(v29);
        sub_B5D668(v94, 0LL);
      }
LABEL_56:
      sub_B5D69C(DataServerAddress, v22);
    }
  }
  return (System_String_o *)v25;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  System_String_o *Path; // x19
  AssetManager_c *v5; // x8

  if ( (byte_42EB7A4 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    byte_42EB7A4 = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  return System_String__Concat_44577788(Path, v5->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *v4; // x0

  if ( (byte_42EB7A2 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    byte_42EB7A2 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  return v4->static_fields->cachePathName;
}


System_String_o *__fastcall AssetManager__get_ConfigFileAddress(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssetManager_c *v4; // x0
  System_String_o *DataServerAddress; // x0

  if ( (byte_42EB7A3 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    byte_42EB7A3 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v4);
  return System_String__Concat_44577788(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  NetworkManager_c *v4; // x0

  if ( (byte_42EB7A1 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    byte_42EB7A1 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_42EB7F8 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    byte_42EB7F8 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return v4->static_fields->dataServerAddress;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagerConfig_c *v7; // x0
  AssetManager_c *v9; // x0
  System_String_o *String; // x0

  if ( (byte_42EB79B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    byte_42EB79B = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseStandaloneAsset )
    return 0;
  v9 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v9 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v9->static_fields->SAVE_KEY, v9->static_fields->SAVE_DATA_OFFLINE, 0LL);
  return System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL);
}


bool __fastcall AssetManager__isDownloadAssetStorageCheck(
        AssetManager_o *this,
        System_String_o *attrib,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *currentValue; // x21
  int monitor; // w8
  char v23; // w19
  int v24; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB7D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      (_DWORD)attrib,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v15,
      v16,
      v17);
    byte_42EB7D0 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B5D69C(assetBundleReleaseDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v26,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v19 )
      break;
    currentValue = v26.fields.currentValue;
    if ( !v26.fields.currentValue )
      sub_B5D69C(v19, v20);
    monitor = (int)v26.fields.currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v26.fields.currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v26.fields.currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v23 = 1;
      v24 = 4;
      goto LABEL_14;
    }
  }
  v23 = 0;
  v24 = 2;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v26,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return (v24 == 4) & v23;
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7B5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v11);
}


bool __fastcall AssetManager__isExistAssetStorage_30658700(System_String_array *nameList, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7B6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B6 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return AssetManager__IsExistAssetStorage_30658880((AssetManager_o *)Instance, nameList, v11);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_42EB7B7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
  {
    LOBYTE(AssetData) = 0;
  }
  else
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v9,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
                  name,
                  v11);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_30659260(System_String_array *nameList, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7B8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return AssetManager__IsNeedDownload_30659440((AssetManager_o *)Instance, nameList, v11);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EB7AC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8, v9);
    byte_42EB7AC = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v13);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7C9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7C9 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0LL;
  if ( !Instance )
    sub_B5D69C(v9, v10);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v11);
}


bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EB7C0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, maxParallelLoad, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8, v9);
    byte_42EB7C0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v13);
}


bool __fastcall AssetManager__loadAssetStorage_30663876(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EB7C2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, maxParallelLoad, (_DWORD)callbackFunc, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8, v9);
    byte_42EB7C2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v13);
}


bool __fastcall AssetManager__loadAssetStorage_30664084(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_42EB7C3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)callbackFunc, loadParalleMax, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8, v9);
    byte_42EB7C3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v11, v12);
  return AssetManager__LoadAssetStorage_30664292(
           (AssetManager_o *)Instance,
           nameList,
           callbackFunc,
           loadParalleMax,
           v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadResourcesFromAssetStorage(
        System_String_o *assetBandleName,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Instance; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5

  if ( (byte_42EB7C1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)resourceNames, (_DWORD)callbackFunc, *(_QWORD *)&maxParallelLoad);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9, v10, v11);
    byte_42EB7C1 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v13 )
    return 0;
  if ( !Instance )
    sub_B5D69C(v13, v14);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_42EB7BC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB7BC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    if ( !BYTE1(Instance[1].monitor) )
      BYTE1(Instance[1].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB7B0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    byte_42EB7B0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Instance )
      sub_B5D69C(v10, v11);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v12);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7CB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7CB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v11);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7C7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7C7 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v11);
  }
}


void __fastcall AssetManager__releaseAssetStorage_30666128(System_String_array *nameList, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7C8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7C8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    AssetManager__ReleaseAssetStorage_30666304((AssetManager_o *)Instance, nameList, v11);
  }
}


void __fastcall AssetManager__releaseAsset_30657232(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB7B1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)nameList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    byte_42EB7B1 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !Instance )
      sub_B5D69C(v10, v11);
    AssetManager__ReleaseAsset_30657428((AssetManager_o *)Instance, type, nameList, v12);
  }
}


void __fastcall AssetManager__releaseAsset_30657564(AssetData_o *assetInfo, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_42EB7B2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v11);
  }
}


void __fastcall AssetManager__releaseAsset_30657772(AssetData_array *assetInfoList, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7B3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7B3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    AssetManager__ReleaseAsset_30657948((AssetManager_o *)Instance, assetInfoList, v11);
  }
}


void __fastcall AssetManager__remove_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x20
  System_Delegate_o *v7; // x21
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AssetManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB799 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_ResourceUnloadEventHandler_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB799 = 1;
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  v7 = (System_Delegate_o *)downLoadWaitList;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v9->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_downLoadWaitList, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v12, v13);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_42EB7BA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    byte_42EB7BA = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_B5D69C(v9, v10);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v11);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x19
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EB7BD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB7BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_B5D69C(v8, v9);
    if ( BYTE1(Instance[1].monitor) )
    {
      BYTE1(Instance[1].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v9);
    }
  }
}


void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_42EB79F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isUse, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5, v6);
    byte_42EB79F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !Instance && !v8 )
    sub_B5D69C(v8, v9);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_22917056(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_22917108(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_B5D560(
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
  __int64 v3; // x3
  BattleServantConfConponent_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  AssetManager_LoadWaitStatus_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42E7521 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)callbackFunc, (_DWORD)method, v3);
    byte_42E7521 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (BattleServantConfConponent_o *)&this->fields.callbackFunc2;
  v8 = (System_Int32_array **)System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  if ( v8 && *v8 != (System_Int32_array *)AssetLoader_LoadEndDataHandler_TypeInfo )
  {
    v15 = (AssetManager_LoadWaitStatus_o *)sub_B5D990(v8);
    AssetManager_LoadWaitStatus__get_Name(v15, v16);
  }
  else
  {
    p_callbackFunc2->klass = (BattleServantConfConponent_c *)v8;
    sub_B5D560(p_callbackFunc2, v8, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(0LL, method);
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
    LOBYTE(data) = AssetData__IsSame_30638412(data, type, name, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct AssetData_o *data; // x8
  System_String_o **p_name; // x8

  if ( (byte_42E7522 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7522 = 1;
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  AssetManager_ResourceUnloadEventHandler_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  AssetManager_ResourceUnloadEventHandler_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  AssetManager_ResourceUnloadEventHandler_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (AssetManager_ResourceUnloadEventHandler_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
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
      sub_B5D69C(0LL, method);
    AssetManager__LoadStart(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssetManager__DelayLoadStart_d__148_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v64; // x0
  __int64 v65; // x1
  AssetData_o *currentValue; // x21
  BattleServantConfConponent_o *p__8__1; // x21
  _BOOL4 isDispLogo_5__2; // w8
  AssetManager_c *klass; // x8
  Il2CppObject *v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_o *v77; // x22
  System_String_o *v78; // x23
  Il2CppObject *DownloadSizeString; // x0
  System_String_o *v80; // x23
  WebViewManager_o *Instance; // x0
  Il2CppObject *v82; // x26
  CommonUI_o *v83; // x24
  ErrorDialog_ClickDelegate_o *v84; // x25
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UnityEngine_WaitForEndOfFrame_o *v91; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  bool result; // w0
  CommonUI_o *v100; // x21
  System_Action_o *v101; // x22
  AvalonSceneManager_c *v102; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v104; // x20
  BattleServantConfConponent_o *v105; // x19
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v112; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v113; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42E751D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__, v5, v6, v7);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33, v34);
    sub_B5D5C4(
      &Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&AssetManager___c__DisplayClass117_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_24146/*"データ更新"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_9379/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_284/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v56, v57, v58);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)sub_B5D5C4(
                                                                                    &StringLiteral_9377/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/,
                                                                                    v59,
                                                                                    v60,
                                                                                    v61);
    byte_42E751D = 1;
  }
  memset(&v113, 0, sizeof(v113));
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v4->fields._isDispLogo_5__2;
    v4->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_60;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_56:
    if ( _4__this )
    {
      HIDWORD(_4__this->fields.unloadCallbacks) = v4->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, 0LL);
      return 0;
    }
    goto LABEL_60;
  }
  if ( _1__state == 1 )
  {
    p__8__1 = (BattleServantConfConponent_o *)&v4->fields.__8__1;
    v4->fields.__1__state = -1;
LABEL_44:
    if ( !p__8__1->klass )
      goto LABEL_60;
    if ( !LOBYTE(p__8__1->klass->_1.name) )
    {
LABEL_48:
      v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v91, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v91;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, (System_Int32_array **)v91, v93, v94, v95, v96, v97, v98);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_60;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_48;
    p__8__1->klass = 0LL;
    sub_B5D560(p__8__1, 0LL, v85, v86, v87, v88, v89, v90);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)_4__this->fields.assetBundleReleaseDic;
  if ( !this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this,
                                                                                  (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_60;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v112,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v113 = v112;
  while ( 1 )
  {
    v64 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v113,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v64 )
      break;
    currentValue = (AssetData_o *)v113.fields.currentValue;
    if ( !v113.fields.currentValue )
      sub_B5D69C(v64, v65);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v113.fields.currentValue, 0LL)
      || System_String__op_Equality(v4->fields.attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      AssetManager__AddLoadWaitStatus_30669584(_4__this, currentValue, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v113,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  klass = _4__this[1].klass;
  if ( !klass )
LABEL_60:
    sub_B5D69C(this, method);
  if ( SLODWORD(klass->_1.byval_arg.data) >= 1 )
  {
    v70 = (Il2CppObject *)sub_B5D694(AssetManager___c__DisplayClass117_0_TypeInfo);
    System_Object___ctor(v70, 0LL);
    v4->fields.__8__1 = (struct AssetManager___c__DisplayClass117_0_o *)v70;
    p__8__1 = (BattleServantConfConponent_o *)&v4->fields.__8__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__8__1,
      (System_Int32_array **)v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    if ( !v4->fields.__8__1 )
      goto LABEL_60;
    v4->fields.__8__1->fields.isDataUpdate = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9379/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_9379/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v77 = (System_String_o *)StringLiteral_24146/*"データ更新"*/;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9377/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_9377/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v78 = (System_String_o *)StringLiteral_284/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSizeString = (Il2CppObject *)AssetManager__GetDownloadSizeString(_4__this, 0LL);
    v80 = System_String__Format(v78, DownloadSizeString, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v82 = (Il2CppObject *)p__8__1->klass;
    v83 = (CommonUI_o *)Instance;
    v84 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v84,
      v82,
      Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v83 )
      goto LABEL_60;
    CommonUI__OpenDataUpdateDialog(v83, v77, v80, v84, 0, 0LL);
    goto LABEL_44;
  }
LABEL_50:
  v4->fields._isDispLogo_5__2 = 0;
  v100 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v101 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v101,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__,
    0LL);
  if ( !v100 )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)CommonUI__PlayLogo(v100, v101, 0LL);
  v4->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_56;
  v102 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v102 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v102->static_fields->DEFAULT_FADE_TIME;
  v104 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v104, DEFAULT_FADE_TIME, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v104;
  v105 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
  sub_B5D560(v105, (System_Int32_array **)v104, v106, v107, v108, v109, v110, v111);
  *(_DWORD *)&v105[-1].fields.isOpenAfter = 2;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v130; // x0
  AssetManager_c *v131; // x0
  AssetManager_c *v132; // x0
  AssetManager_c *v133; // x0
  System_String_o *AllText; // x21
  System_String_o *v135; // x0
  AssetManager__InitCR_d__130_o **v136; // x21
  UnityEngine_WaitForEndOfFrame_o *v137; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  bool result; // w0
  System_String_o *v146; // x21
  System_Char_array *v147; // x0
  System_String_o *v148; // x21
  System_Char_array *v149; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  int v157; // w23
  __int64 *v158; // x8
  System_String_o *v159; // x0
  __int64 v160; // x1
  System_String_o *v161; // x22
  System_String_o *v162; // x22
  System_String_o *v163; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v165; // x1
  System_Byte_array *v166; // x23
  uint32_t v167; // w23
  System_Char_array *v168; // x0
  il2cpp_array_size_t v169; // w8
  AssetManager__InitCR_d__130_o *v170; // x28
  Il2CppObject *_2__current; // x8
  System_String_o *v172; // x21
  AssetManager__InitCR_d__130_o *v173; // x22
  System_String_o *v174; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  AssetManager_c *v181; // x8
  System_Int32_array **v182; // x23
  struct AssetManager_StaticFields *v183; // x0
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  AssetManager_c *v190; // x0
  System_Int32_array ***p_configFileUrl_5__2; // x8
  System_Int32_array **v192; // x23
  struct AssetManager_StaticFields *v193; // x0
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  AssetManager_c *v200; // x0
  System_Int32_array ***p_loader_5__3; // x8
  System_Int32_array **v202; // x22
  struct AssetManager_StaticFields *v203; // x0
  int v204; // w8
  __int64 v205; // x23
  System_String_o *v206; // x21
  AssetManager__InitCR_d__130_o *v207; // x22
  System_String_o *v208; // x0
  int32_t v209; // w21
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v211; // x0
  int32_t v212; // w25
  System_String_o *v213; // x0
  int v214; // w8
  System_String_o *wait_5__6; // x26
  uint32_t v216; // w27
  int32_t v217; // w24
  System_String_o *v218; // x28
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x22
  AssetData_o *v220; // x21
  System_String_o *v221; // x21
  AssetManager_c *v222; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  System_Int32_array **v224; // x1
  System_Int32_array **v225; // x1
  struct AssetManager_StaticFields *v226; // x0
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  System_Int32_array **v233; // x1
  struct AssetManager_StaticFields *v234; // x0
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  ManagerConfig_c *v241; // x0
  struct ManagerConfig_StaticFields *v242; // x8
  CommonUI_o *Instance; // x22
  ErrorDialog_ClickDelegate_o *v244; // x23
  __int64 v245; // x0
  __int64 v246; // x0
  __int64 v247; // x0
  __int64 v248; // x0
  __int64 v249; // x0
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  System_String_o *v263; // x21
  System_String_o *UrlString; // x0
  System_Int32_array **v265; // x0
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v273; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v275; // x22
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v284; // s8
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  float v291; // s0
  bool v292; // zf
  float v293; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v296; // x22
  System_String_o *v297; // x22
  System_String_o *v298; // x0
  System_String_o *v299; // x0
  Il2CppObject *v300; // x22
  ManagerConfig_c *v301; // x0
  struct ManagerConfig_StaticFields *v302; // x8
  System_Int32_array **v303; // x1
  System_String_o *v304; // x22
  int v305; // w8
  int32_t v306; // w0
  int32_t v307; // w24
  System_String_o *v308; // x23
  System_String_o *v309; // x22
  System_Byte_array *v310; // x24
  uint32_t v311; // w24
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  int v324; // w8
  System_String_array *v325; // x28
  AssetDataListInfo_o *v326; // x22
  System_String_array **v327; // x2
  System_String_array **v328; // x3
  System_Boolean_array **v329; // x4
  System_Int32_array **v330; // x5
  System_Int32_array *v331; // x6
  System_Int32_array *v332; // x7
  int v333; // w8
  unsigned int v334; // w25
  System_String_o *v335; // x22
  AssetManager__InitCR_d__130_o *v336; // x27
  char v337; // w8
  System_String_o *v338; // x0
  int v339; // w9
  void **v340; // x11
  AssetManager_c *v341; // x8
  System_String_o *v342; // x26
  bool v343; // cc
  System_Int32_array ***v344; // x9
  System_Int32_array ***v345; // x10
  System_Int32_array **v346; // x24
  System_Int32_array **v347; // x23
  System_String_o *v348; // x22
  System_String_o *v349; // x0
  int32_t v350; // w22
  System_String_o *v351; // x24
  System_String_o *v352; // x0
  int32_t v353; // w26
  System_String_o *v354; // x0
  int v355; // w8
  System_String_o *v356; // x23
  System_String_array **v357; // x2
  System_String_array **v358; // x3
  System_Boolean_array **v359; // x4
  System_Int32_array **v360; // x5
  System_Int32_array *v361; // x6
  System_Int32_array *v362; // x7
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  System_String_array **v369; // x2
  System_String_array **v370; // x3
  System_Boolean_array **v371; // x4
  System_Int32_array **v372; // x5
  System_Int32_array *v373; // x6
  System_Int32_array *v374; // x7
  AssetData_o *AssetData; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v376; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fields; // x27
  System_String_o *v378; // x26
  int32_t v379; // w24
  AssetData_o *v380; // x22
  Il2CppObject *v381; // x22
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  ManagerConfig_c *v388; // x0
  struct ManagerConfig_StaticFields *v389; // x8
  CommonUI_o *v390; // x21
  ErrorDialog_ClickDelegate_o *v391; // x23
  UnityEngine_WaitForEndOfFrame_o *v392; // x20
  BattleServantConfConponent_o *v393; // x19
  System_String_array **v394; // x2
  System_String_array **v395; // x3
  System_Boolean_array **v396; // x4
  System_Int32_array **v397; // x5
  System_Int32_array *v398; // x6
  System_Int32_array *v399; // x7
  int v400; // w8
  ManagementManager_c *v401; // x0
  _BOOL4 isDuringStartup; // w22
  CommonUI_o *v403; // x21
  System_String_o *v404; // x22
  ErrorDialog_ClickDelegate_o *v405; // x23
  System_String_o *v406; // x22
  ErrorDialog_ClickDelegate_o *v407; // x23
  UnityEngine_WaitForEndOfFrame_o *v408; // x20
  System_String_array **v409; // x2
  System_String_array **v410; // x3
  System_Boolean_array **v411; // x4
  System_Int32_array **v412; // x5
  System_Int32_array *v413; // x6
  System_Int32_array *v414; // x7
  UnityEngine_WaitForSeconds_o *v415; // x20
  System_String_array **v416; // x2
  System_String_array **v417; // x3
  System_Boolean_array **v418; // x4
  System_Int32_array **v419; // x5
  System_Int32_array *v420; // x6
  System_Int32_array *v421; // x7
  AssetManager_c *v422; // x0
  System_Int32_array **klass; // x23
  struct AssetManager_StaticFields *v424; // x0
  struct AssetManager_StaticFields *v425; // x0
  System_Int32_array **v426; // x1
  System_String_array **v427; // x2
  System_String_array **v428; // x3
  System_Boolean_array **v429; // x4
  System_Int32_array **v430; // x5
  System_Int32_array *v431; // x6
  System_Int32_array *v432; // x7
  struct AssetManager_StaticFields *v433; // x0
  System_Int32_array **v434; // x1
  System_String_array **v435; // x2
  System_String_array **v436; // x3
  System_Boolean_array **v437; // x4
  System_Int32_array **v438; // x5
  System_Int32_array *v439; // x6
  System_Int32_array *v440; // x7
  _BOOL8 v441; // x0
  __int64 v442; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v444; // x0
  __int64 v445; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v446; // x0
  BattleServantConfConponent_o *v447; // x19
  System_String_array **v448; // x2
  System_String_array **v449; // x3
  System_Boolean_array **v450; // x4
  System_Int32_array **v451; // x5
  System_Int32_array *v452; // x6
  System_Int32_array *v453; // x7
  UnityEngine_WaitForEndOfFrame_o *v454; // x20
  System_String_array **v455; // x2
  System_String_array **v456; // x3
  System_Boolean_array **v457; // x4
  System_Int32_array **v458; // x5
  System_Int32_array *v459; // x6
  System_Int32_array *v460; // x7
  __int64 v461; // x0
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-100h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-100h]
  int32_t size; // [xsp+24h] [xbp-DCh]
  System_String_o *keyType; // [xsp+28h] [xbp-D8h]
  uint32_t crc; // [xsp+34h] [xbp-CCh]
  BattleServantConfConponent_o *p_fields; // [xsp+38h] [xbp-C8h]
  BattleServantConfConponent_o *p_dateVersion; // [xsp+40h] [xbp-C0h]
  AssetManager__InitCR_d__130_o *v469; // [xsp+48h] [xbp-B8h]
  BattleServantConfConponent_o *p_buildVersion; // [xsp+48h] [xbp-B8h]
  System_String_o *attrib; // [xsp+50h] [xbp-B0h]
  System_String_o *attriba; // [xsp+50h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v473; // [xsp+58h] [xbp-A8h] BYREF
  int v474; // [xsp+78h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v475; // [xsp+80h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_42E751E & 1) == 0 )
  {
    sub_B5D5C4(&AssetDataListInfo_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&AssetData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_AssetManager_OnClickRetryDialog__, v12, v13, v14);
    sub_B5D5C4(&Method_AssetManager_OnClickWaitDebugDialog__, v15, v16, v17);
    sub_B5D5C4(&AssetManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&char___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Crc32_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Add__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v63, v64, v65);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&ManagementManager_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v75, v76, v77);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_2142/*"AssetStorageList download time over"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_2138/*"AssetStorageList download crc error"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_2134/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_2130/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_15935/*"[FFFF80]Download error for debug"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_2139/*"AssetStorageList download data error"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_2141/*"AssetStorageList download error : "*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_2132/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_24010/*"~"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_2133/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_11718/*"SCRIPT"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v123, v124, v125);
    this = (AssetManager__InitCR_d__130_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v126, v127, v128);
    byte_42E751E = 1;
  }
  memset(&v475, 0, sizeof(v475));
  v474 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      v130 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v130 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v130->static_fields->cachePathName, 0LL) )
      {
        v131 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v131 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v131->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
      if ( !this )
        goto LABEL_314;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
             (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_136;
      }
      v132 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v132 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v132->static_fields->cacheListFileName, 0LL) )
        goto LABEL_136;
      v133 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v133 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v133->static_fields->cacheListFileName, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v135 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v146 = v135;
      if ( !v135 )
        goto LABEL_136;
      v147 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !v147 )
        sub_B5D69C(0LL, 0LL);
      if ( !v147->max_length )
      {
        v245 = sub_B5D6C8(v147);
        sub_B5D668(v245, 0LL);
      }
      v147->m_Items[2] = -257;
      v148 = System_String__Trim(v146, v147, 0LL);
      v149 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
      if ( !v149 )
        sub_B5D69C(0LL, 0LL);
      max_length = v149->max_length;
      if ( !max_length )
      {
        v246 = sub_B5D6C8(v149);
        sub_B5D668(v246, 0LL);
      }
      v149->m_Items[2] = 13;
      if ( max_length == 1 )
      {
        v247 = sub_B5D6C8(v149);
        sub_B5D668(v247, 0LL);
      }
      v149->m_Items[3] = 10;
      if ( !v148 )
        sub_B5D69C(v149, v149);
      v157 = System_String__IndexOfAny(v148, v149, 0LL);
      if ( v157 < 2 )
      {
        v158 = &StringLiteral_2133/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_109;
      }
      v159 = System_String__Substring_44641524(v148, 0, v157, 0LL);
      v161 = v159;
      if ( !v159 )
        sub_B5D69C(0LL, v160);
      if ( !System_String__StartsWith(v159, (System_String_o *)StringLiteral_24010/*"~"*/, 0LL) )
      {
        v158 = &StringLiteral_2134/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_109;
      }
      v162 = System_String__Substring(v161, 1, 0LL);
      v163 = System_String__Substring(v148, v157 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B5D69C(0LL, v165);
      v166 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                    UTF8,
                                    v163,
                                    UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v167 = Crc32__Compute(v166, 0LL);
      if ( System_UInt32__Parse(v162, 0LL) != v167 )
      {
        v158 = &StringLiteral_2130/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_109;
      }
      v168 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
      if ( !v168 )
        sub_B5D69C(0LL, 0LL);
      v169 = v168->max_length;
      if ( !v169 )
      {
        v248 = sub_B5D6C8(v168);
        sub_B5D668(v248, 0LL);
      }
      v168->m_Items[2] = 13;
      if ( v169 == 1 )
      {
        v249 = sub_B5D6C8(v168);
        sub_B5D668(v249, 0LL);
      }
      v168->m_Items[3] = 10;
      if ( !v163 )
        sub_B5D69C(v168, v168);
      this = (AssetManager__InitCR_d__130_o *)System_String__Split_44638572(v163, v168, 1, 0LL);
      v170 = this;
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
                                                (System_String_o *)StringLiteral_1560/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_108:
        v158 = &StringLiteral_2132/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_109:
        v221 = (System_String_o *)*v158;
        if ( *v158 )
        {
          v222 = AssetManager_TypeInfo;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v222 = AssetManager_TypeInfo;
          }
          static_fields = v222->static_fields;
          v224 = (System_Int32_array **)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B5D560(
            (BattleServantConfConponent_o *)&static_fields->assetBundleMasterVersion,
            v224,
            v151,
            v152,
            v153,
            v154,
            v155,
            v156);
          v225 = (System_Int32_array **)StringLiteral_1/*""*/;
          v226 = AssetManager_TypeInfo->static_fields;
          v226->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v226->assetBundleDateVersion,
            v225,
            v227,
            v228,
            v229,
            v230,
            v231,
            v232);
          v233 = (System_Int32_array **)StringLiteral_1/*""*/;
          v234 = AssetManager_TypeInfo->static_fields;
          v234->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v234->assetBundleBuildVersion,
            v233,
            v235,
            v236,
            v237,
            v238,
            v239,
            v240);
          this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
          if ( !this )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
            (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v241 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v241 = ManagerConfig_TypeInfo;
          }
          v242 = v241->static_fields;
          if ( v242->UseDebugCommand )
          {
            if ( (BYTE3(v241->vtable._0_Equals.methodPtr) & 4) != 0 && !v241->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v241);
              v242 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v242->ServerDefaultType, (System_String_o *)StringLiteral_11718/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v244 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v244,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_314;
              methoda.fields.value = 0LL;
              *(_DWORD *)&methoda.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                Instance,
                (System_String_o *)StringLiteral_15935/*"[FFFF80]Download error for debug"*/,
                v221,
                v244,
                1,
                0,
                -1.0,
                1,
                methoda,
                0LL);
LABEL_32:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v137 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v137, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v137;
                p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                sub_B5D560(p__2__current, (System_Int32_array **)v137, v139, v140, v141, v142, v143, v144);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !LODWORD(v170->fields.__2__current) )
        goto LABEL_315;
      v172 = (System_String_o *)v170->fields.__4__this;
      this = (AssetManager__InitCR_d__130_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_314;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_315;
      LOWORD(this->fields.__4__this) = 44;
      if ( !v172 )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)System_String__Split(v172, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_314;
      v173 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_315;
      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_314;
      v174 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v181 = AssetManager_TypeInfo;
      v182 = (System_Int32_array **)v174;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v181 = AssetManager_TypeInfo;
      }
      v183 = v181->static_fields;
      v183->assetBundleMasterVersion = (struct System_String_o *)v182;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v183->assetBundleMasterVersion,
        v182,
        v175,
        v176,
        v177,
        v178,
        v179,
        v180);
      v190 = AssetManager_TypeInfo;
      if ( SLODWORD(v173->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (System_Int32_array ***)&v173->fields._configFileUrl_5__2;
      v192 = *p_configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v190 = AssetManager_TypeInfo;
      }
      v193 = v190->static_fields;
      v193->assetBundleDateVersion = (struct System_String_o *)v192;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v193->assetBundleDateVersion,
        v192,
        v184,
        v185,
        v186,
        v187,
        v188,
        v189);
      v200 = AssetManager_TypeInfo;
      if ( SLODWORD(v173->fields.__2__current) <= 2 )
        p_loader_5__3 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (System_Int32_array ***)&v173->fields._loader_5__3;
      v202 = *p_loader_5__3;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v200 = AssetManager_TypeInfo;
      }
      v203 = v200->static_fields;
      v203->assetBundleBuildVersion = (struct System_String_o *)v202;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v203->assetBundleBuildVersion,
        v202,
        v194,
        v195,
        v196,
        v197,
        v198,
        v199);
      v204 = (int)v170->fields.__2__current;
      if ( v204 >= 2 )
      {
        v205 = 5LL;
        v469 = v170;
        while ( (int)v205 - 4 < (unsigned int)v204 )
        {
          v206 = (System_String_o *)*((_QWORD *)&v170->klass + v205);
          this = (AssetManager__InitCR_d__130_o *)sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_314;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            break;
          LOWORD(this->fields.__4__this) = 44;
          if ( !v206 )
            goto LABEL_314;
          this = (AssetManager__InitCR_d__130_o *)System_String__Split(v206, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_314;
          v207 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_136;
          this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_314;
          v208 = System_String__Trim_44565120((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v208, 0LL);
          if ( LODWORD(v207->fields.__2__current) < 3 )
            goto LABEL_315;
          v209 = (int)this;
          this = (AssetManager__InitCR_d__130_o *)v207->fields._loader_5__3;
          if ( !this )
            goto LABEL_314;
          configFileUrl_5__2 = v207->fields._configFileUrl_5__2;
          v211 = System_String__Trim_44565120((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v211, 0LL);
          if ( LODWORD(v207->fields.__2__current) <= 3 )
            goto LABEL_315;
          v212 = (int)this;
          this = *(AssetManager__InitCR_d__130_o **)&v207->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_314;
          v213 = System_String__Trim_44565120((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_UInt32__Parse(v213, 0LL);
          v214 = (int)v207->fields.__2__current;
          if ( (unsigned int)v214 <= 4 )
            goto LABEL_315;
          wait_5__6 = (System_String_o *)v207->fields._wait_5__6;
          v216 = (unsigned int)this;
          attrib = configFileUrl_5__2;
          v217 = v209;
          v218 = v214 >= 6 ? (System_String_o *)v207[1].klass : 0LL;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
          v220 = (AssetData_o *)sub_B5D694(AssetData_TypeInfo);
          AssetData___ctor_30638084(v220, 0, wait_5__6, v217, attrib, v212, v216, v218, 0LL);
          if ( !assetBundleReleaseDic )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            assetBundleReleaseDic,
            (System_Xml_XmlQualifiedName_o *)wait_5__6,
            (System_Xml_Schema_XmlSchemaObject_o *)v220,
            (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v170 = v469;
          ++v205;
          v204 = (int)v469->fields.__2__current;
          if ( (int)v205 - 4 >= v204 )
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._configFileUrl_5__2,
        ConfigFileAddress,
        v251,
        v252,
        v253,
        v254,
        v255,
        v256);
      v8->fields._loader_5__3 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._loader_5__3, 0LL, v257, v258, v259, v260, v261, v262);
LABEL_140:
      v263 = v8->fields._configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v263, 0LL);
      v265 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v8->fields._loader_5__3 = (struct UnityEngine_Networking_UnityWebRequest_o *)v265;
      v136 = (AssetManager__InitCR_d__130_o **)&v8->fields._loader_5__3;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._loader_5__3, v265, v266, v267, v268, v269, v270, v271);
      this = (AssetManager__InitCR_d__130_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_314;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v273 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v273 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v273->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v275 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v275, 0LL);
      v8->fields._wait_5__6 = v275;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._wait_5__6,
        (System_Int32_array **)v275,
        v276,
        v277,
        v278,
        v279,
        v280,
        v281);
LABEL_148:
      this = *v136;
      if ( !*v136 )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_155;
      this = *v136;
      if ( !*v136 )
        goto LABEL_314;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v284 = downloadProgress;
      v291 = UnityEngine_Time__get_unscaledTime(0LL);
      v292 = v284 == loadProgress_5__5;
      v293 = v291;
      if ( !v292 )
      {
        v301 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v301 = ManagerConfig_TypeInfo;
        }
        v302 = v301->static_fields;
        this = (AssetManager__InitCR_d__130_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v293 + v302->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_175;
        }
LABEL_314:
        sub_B5D69C(this, method);
      }
      if ( v291 >= v8->fields._requestTime_5__4 )
      {
LABEL_155:
        if ( !_4__this )
          goto LABEL_314;
        this = *v136;
        if ( !*v136 )
          goto LABEL_314;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v300 = (Il2CppObject *)StringLiteral_2142/*"AssetStorageList download time over"*/;
          goto LABEL_260;
        }
        this = *v136;
        if ( !*v136 )
          goto LABEL_314;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__130_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v136 )
          goto LABEL_314;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v299 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v136,
                   0LL);
LABEL_177:
          v300 = (Il2CppObject *)v299;
          goto LABEL_260;
        }
        this = (AssetManager__InitCR_d__130_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v136,
                                                  0LL);
        if ( !this )
          goto LABEL_314;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v296 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v296, 0LL) )
        {
          v297 = v8->fields._configFileUrl_5__2;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          v298 = AssetManager__getUrlString(v297, 0LL);
          v299 = System_String__Concat_44577788((System_String_o *)StringLiteral_2141/*"AssetStorageList download error : "*/, v298, 0LL);
          goto LABEL_177;
        }
        this = (AssetManager__InitCR_d__130_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_314;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_315;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v296 )
          goto LABEL_314;
        this = (AssetManager__InitCR_d__130_o *)System_String__Trim(v296, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_314;
        v304 = (System_String_o *)this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_24010/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__130_o *)sub_B5D5DC(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_314;
          v305 = (int)this->fields.__2__current;
          if ( !v305 )
            goto LABEL_315;
          LOWORD(this->fields.__4__this) = 13;
          if ( v305 == 1 )
            goto LABEL_315;
          WORD1(this->fields.__4__this) = 10;
          v306 = System_String__IndexOfAny(v304, (System_Char_array *)this, 0LL);
          if ( v306 >= 2 )
          {
            v307 = v306;
            v308 = System_String__Substring_44641524(v304, 1, v306 - 1, 0LL);
            v309 = System_String__Substring(v304, v307 + 1, 0LL);
            this = (AssetManager__InitCR_d__130_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_314;
            v310 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__130_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                          this,
                                          v309,
                                          this->klass[1]._1.nestedTypes);
            if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v311 = Crc32__Compute(v310, 0LL);
            if ( System_UInt32__Parse(v308, 0LL) == v311 )
            {
              if ( *v136 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v136, 0LL);
                *v136 = 0LL;
                sub_B5D560((BattleServantConfConponent_o *)v136, 0LL, v318, v319, v320, v321, v322, v323);
              }
              if ( !v309 )
                goto LABEL_313;
              this = (AssetManager__InitCR_d__130_o *)sub_B5D5DC(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_314;
              v324 = (int)this->fields.__2__current;
              if ( v324 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v324 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v325 = System_String__Split_44638572(v309, (System_Char_array *)this, 1, 0LL);
                  v326 = (AssetDataListInfo_o *)sub_B5D694(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor(v326, 0LL);
                  if ( !v325 )
                    goto LABEL_314;
                  v333 = v325->max_length;
                  p_fields = (BattleServantConfConponent_o *)&v326->fields;
                  p_dateVersion = (BattleServantConfConponent_o *)&v326->fields.dateVersion;
                  p_buildVersion = (BattleServantConfConponent_o *)&v326->fields.buildVersion;
                  attriba = (System_String_o *)v326;
                  if ( v333 >= 1 )
                  {
                    v334 = 0;
                    while ( v334 < v333 )
                    {
                      v335 = v325->m_Items[v334];
                      this = (AssetManager__InitCR_d__130_o *)sub_B5D5DC(char___TypeInfo, 1LL);
                      if ( !this )
                        goto LABEL_314;
                      method = (const MethodInfo *)this;
                      if ( !LODWORD(this->fields.__2__current) )
                        break;
                      LOWORD(this->fields.__4__this) = 44;
                      if ( !v335 )
                        goto LABEL_314;
                      this = (AssetManager__InitCR_d__130_o *)System_String__Split(v335, (System_Char_array *)this, 0LL);
                      if ( !this )
                        goto LABEL_314;
                      v336 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_299;
                      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_314;
                      this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1560/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v336->fields.__2__current) )
                        goto LABEL_315;
                      v337 = (char)this;
                      this = (AssetManager__InitCR_d__130_o *)v336->fields.__4__this;
                      if ( !this )
                        goto LABEL_314;
                      if ( (v337 & 1) != 0 )
                      {
                        v338 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v339 = (int)v336->fields.__2__current;
                        v340 = (void **)&v336->fields._loader_5__3;
                        v341 = AssetManager_TypeInfo;
                        v342 = v338;
                        if ( v339 == 2 )
                          v340 = &StringLiteral_1/*""*/;
                        v343 = v339 <= 1;
                        if ( v339 <= 1 )
                          v344 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v344 = (System_Int32_array ***)&v336->fields._configFileUrl_5__2;
                        if ( v343 )
                          v345 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v345 = (System_Int32_array ***)v340;
                        v346 = *v344;
                        v347 = *v345;
                        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
                        {
                          v348 = attriba;
                          if ( !AssetManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                            v341 = AssetManager_TypeInfo;
                          }
                        }
                        else
                        {
                          v348 = attriba;
                        }
                        this = (AssetManager__InitCR_d__130_o *)System_String__op_Inequality(
                                                                  v342,
                                                                  v341->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
                          if ( !this )
                            goto LABEL_314;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                            (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v348 )
                          goto LABEL_314;
                        p_fields->klass = (BattleServantConfConponent_c *)v342;
                        sub_B5D560(p_fields, (System_Int32_array **)v342, v357, v358, v359, v360, v361, v362);
                        p_dateVersion->klass = (BattleServantConfConponent_c *)v346;
                        sub_B5D560(p_dateVersion, v346, v363, v364, v365, v366, v367, v368);
                        p_buildVersion->klass = (BattleServantConfConponent_c *)v347;
                        sub_B5D560(p_buildVersion, v347, v369, v370, v371, v372, v373, v374);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_24010/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v336->fields.__2__current) )
                            goto LABEL_315;
                          this = (AssetManager__InitCR_d__130_o *)v336->fields.__4__this;
                          if ( !this )
                            goto LABEL_314;
                          this = (AssetManager__InitCR_d__130_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v336->fields.__2__current) < 5 )
                              goto LABEL_299;
                            this = (AssetManager__InitCR_d__130_o *)v336->fields.__4__this;
                            if ( !this )
                              goto LABEL_314;
                            v349 = System_String__Trim_44565120((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v349, 0LL);
                            if ( LODWORD(v336->fields.__2__current) < 3 )
                              goto LABEL_315;
                            v350 = (int)this;
                            this = (AssetManager__InitCR_d__130_o *)v336->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_314;
                            v351 = v336->fields._configFileUrl_5__2;
                            v352 = System_String__Trim_44565120((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v352, 0LL);
                            if ( LODWORD(v336->fields.__2__current) <= 3 )
                              goto LABEL_315;
                            v353 = (int)this;
                            this = *(AssetManager__InitCR_d__130_o **)&v336->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_314;
                            v354 = System_String__Trim_44565120((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_UInt32__Parse(v354, 0LL);
                            v355 = (int)v336->fields.__2__current;
                            crc = (unsigned int)this;
                            if ( (unsigned int)v355 <= 4 )
                              goto LABEL_315;
                            v356 = (System_String_o *)v336->fields._wait_5__6;
                            if ( v355 >= 6 )
                              keyType = (System_String_o *)v336[1].klass;
                            else
                              keyType = 0LL;
                            AssetData = AssetManager__GetAssetData(
                                          _4__this,
                                          _4__this->fields.assetBundleReleaseDic,
                                          v356,
                                          0LL);
                            if ( AssetData )
                            {
                              v376 = (EventMissionProgressRequest_Argument_ProgressData_o *)AssetData;
                              this = (AssetManager__InitCR_d__130_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        v350,
                                                                        v351,
                                                                        v353,
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
                                v376,
                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
                              v356 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__130_o *)System_String__IsNullOrEmpty(v356, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              size = v353;
                              if ( !attriba )
                                goto LABEL_314;
                              fields = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attriba[1].fields;
                              v378 = v351;
                              v379 = v350;
                              v380 = (AssetData_o *)sub_B5D694(AssetData_TypeInfo);
                              AssetData___ctor_30638228(v380, 0, v356, 0, v379, v378, size, crc, keyType, 0LL);
                              if ( !fields )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                fields,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v380,
                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
                            }
                          }
                        }
                      }
                      v333 = v325->max_length;
                      if ( (int)++v334 >= v333 )
                        goto LABEL_299;
                    }
                    goto LABEL_315;
                  }
LABEL_299:
                  if ( !attriba )
                    goto LABEL_314;
                  v422 = AssetManager_TypeInfo;
                  klass = (System_Int32_array **)p_fields->klass;
                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v422 = AssetManager_TypeInfo;
                  }
                  v424 = v422->static_fields;
                  v424->assetBundleMasterVersion = (struct System_String_o *)klass;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v424->assetBundleMasterVersion,
                    klass,
                    v327,
                    v328,
                    v329,
                    v330,
                    v331,
                    v332);
                  v425 = AssetManager_TypeInfo->static_fields;
                  v426 = (System_Int32_array **)p_dateVersion->klass;
                  v425->assetBundleDateVersion = (struct System_String_o *)p_dateVersion->klass;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v425->assetBundleDateVersion,
                    v426,
                    v427,
                    v428,
                    v429,
                    v430,
                    v431,
                    v432);
                  v433 = AssetManager_TypeInfo->static_fields;
                  v434 = (System_Int32_array **)p_buildVersion->klass;
                  v433->assetBundleBuildVersion = (struct System_String_o *)p_buildVersion->klass;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v433->assetBundleBuildVersion,
                    v434,
                    v435,
                    v436,
                    v437,
                    v438,
                    v439,
                    v440);
                  this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
                  if ( !this )
                    goto LABEL_314;
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = (AssetManager__InitCR_d__130_o *)attriba[1].fields;
                  if ( !this )
                    goto LABEL_314;
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v473,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
                    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v475 = v473;
                  while ( 1 )
                  {
                    v441 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             &v475,
                             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v441 )
                      break;
                    current = v475.fields.current;
                    if ( !v475.fields.current )
                      sub_B5D69C(v441, v442);
                    v444 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                    if ( !v444 )
                      sub_B5D69C(0LL, v442);
                    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            v444,
                            (System_Xml_XmlQualifiedName_o *)v475.fields.current[1].monitor,
                            (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v446 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                      if ( !v446 )
                        sub_B5D69C(0LL, v445);
                      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                        v446,
                        (System_Xml_XmlQualifiedName_o *)current[1].monitor,
                        (System_Xml_Schema_XmlSchemaObject_o *)current,
                        (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    &v475,
                    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, 0LL);
LABEL_313:
                  v8->fields._configFileUrl_5__2 = 0LL;
                  v447 = (BattleServantConfConponent_o *)&v8->fields._configFileUrl_5__2;
                  sub_B5D560(v447, 0LL, v312, v313, v314, v315, v316, v317);
                  v447->monitor = 0LL;
                  sub_B5D560((BattleServantConfConponent_o *)v136, 0LL, v448, v449, v450, v451, v452, v453);
                  v454 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v454, 0LL);
                  v447[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v454;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)((char *)v447 - 16),
                    (System_Int32_array **)v454,
                    v455,
                    v456,
                    v457,
                    v458,
                    v459,
                    v460);
                  *(_DWORD *)&v447[-1].fields.isEquip = 6;
                  return 1;
                }
              }
LABEL_315:
              v461 = sub_B5D6C8(this);
              sub_B5D668(v461, 0LL);
            }
            v381 = (Il2CppObject *)StringLiteral_2138/*"AssetStorageList download crc error"*/;
            if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError(v381, 0LL);
          }
        }
        v300 = (Il2CppObject *)StringLiteral_2139/*"AssetStorageList download data error"*/;
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError(v300, 0LL);
LABEL_260:
        if ( *v136 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v136, 0LL);
          *v136 = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)v136, 0LL, v382, v383, v384, v385, v386, v387);
        }
        if ( v300 )
        {
          v388 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v388 = ManagerConfig_TypeInfo;
          }
          v389 = v388->static_fields;
          if ( v389->UseDebugCommand )
          {
            if ( (BYTE3(v388->vtable._0_Equals.methodPtr) & 4) != 0 && !v388->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v388);
              v389 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v389->ServerDefaultType, (System_String_o *)StringLiteral_11718/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              v390 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v391 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v391,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !v390 )
                goto LABEL_314;
              methodb.fields.value = 0LL;
              *(_DWORD *)&methodb.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                v390,
                (System_String_o *)StringLiteral_15935/*"[FFFF80]Download error for debug"*/,
                (System_String_o *)v300,
                v391,
                1,
                0,
                -1.0,
                1,
                methodb,
                0LL);
LABEL_273:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v392 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v392, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v392;
                v393 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                sub_B5D560(v393, (System_Int32_array **)v392, v394, v395, v396, v397, v398, v399);
                v400 = 3;
LABEL_297:
                *(_DWORD *)&v393[-1].fields.isOpenAfter = v400;
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
          if ( !byte_42E5AE3 )
          {
            sub_B5D5C4(&ManagementManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
            byte_42E5AE3 = 1;
          }
          v401 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v401 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v401->static_fields->isDuringStartup;
          v403 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( isDuringStartup )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v404 = LocalizationManager__Get((System_String_o *)StringLiteral_1766/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v405 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v405,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v403 )
              goto LABEL_314;
            CommonUI__OpenRetryBootDialog(v403, (System_String_o *)StringLiteral_1/*""*/, v404, v405, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v406 = LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v407 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v407,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v403 )
              goto LABEL_314;
            CommonUI__OpenRetryDialog(v403, (System_String_o *)StringLiteral_1/*""*/, v406, v407, 0, 0LL);
          }
LABEL_294:
          if ( LOBYTE(_4__this->fields.writeRequestThread) )
          {
            v408 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v408, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v408;
            v393 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B5D560(v393, (System_Int32_array **)v408, v409, v410, v411, v412, v413, v414);
            v400 = 4;
            goto LABEL_297;
          }
        }
        v415 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v415, 1.0, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v415;
        v393 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v393, (System_Int32_array **)v415, v416, v417, v418, v419, v420, v421);
        v400 = 5;
        goto LABEL_297;
      }
LABEL_175:
      v303 = (System_Int32_array **)v8->fields._wait_5__6;
      v8->fields.__2__current = (Il2CppObject *)v303;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.__2__current, v303, v285, v286, v287, v288, v289, v290);
      v8->fields.__1__state = 2;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_32;
      goto LABEL_314;
    case 2:
      v136 = (AssetManager__InitCR_d__130_o **)&v8->fields._loader_5__3;
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
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.assetBundleDic, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssetManager__InitCR_d__130_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  if ( (byte_42E751F & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_B5D5C4(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        (_DWORD)method,
                                                                        (_DWORD)v2,
                                                                        v3);
    byte_42E751F = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_B5D560(
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
      sub_B5D69C(this, method);
  }
  if ( BYTE4(_4__this->fields.writeRequestThread) || BYTE3(_4__this->fields.writeRequestThread) )
  {
    wait_5__2 = (System_Int32_array **)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields.__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    UnityEngine_Application__Quit_41546252(0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  AssetLoader_o *loader; // x20
  System_Int32_array **_4__this; // x22
  __int64 v10; // x21
  __int64 v11; // x9
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_42E751B & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetManager_OnEndLoadAssetStorage__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetLoader_LoadEndHandler_TypeInfo, v5, v6, v7);
    byte_42E751B = 1;
  }
  loader = this->fields.loader;
  _4__this = (System_Int32_array **)this->fields.__4__this;
  v10 = sub_B5D694(AssetLoader_LoadEndHandler_TypeInfo);
  v11 = *(_QWORD *)Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v10 + 40) = Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 32) = _4__this;
  sub_B5D560((BattleServantConfConponent_o *)(v10 + 32), _4__this, v12, v13, v14, v15, v16, v17);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_B5D69C(v18, v19);
  AssetLoader__StartLoad(loader, (AssetLoader_LoadEndHandler_o *)v10, waiter->fields.resourceNames, 0LL);
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
  __int64 v3; // x3
  AssetManager___c__DisplayClass168_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_string__o *remainNameList; // x8
  struct AssetManager_o *_4__this; // x8

  v5 = this;
  if ( (byte_42E751C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, (_DWORD)data, (_DWORD)method, v3);
    this = (AssetManager___c__DisplayClass168_0_o *)sub_B5D5C4(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v6,
                                                      v7,
                                                      v8);
    byte_42E751C = 1;
  }
  ++v5->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_13;
  this = (AssetManager___c__DisplayClass168_0_o *)v5->fields.remainNameList;
  if ( !this )
    goto LABEL_13;
  this = (AssetManager___c__DisplayClass168_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                    (WarBoardManager_TaskList_o *)data->fields.name,
                                                    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v5->fields.calledCallbackFunc )
    return;
  remainNameList = v5->fields.remainNameList;
  if ( !remainNameList )
LABEL_13:
    sub_B5D69C(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass168_0_o *)v5->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v5->fields.callbackFunc, 0LL);
      _4__this = v5->fields.__4__this;
      if ( _4__this )
      {
        HIDWORD(_4__this->fields.unloadCallbacks) = v5->fields.loadParallelMax;
        this = (AssetManager___c__DisplayClass168_0_o *)v5->fields.__4__this;
        v5->fields.calledCallbackFunc = 1;
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
  int v2; // w2
  __int64 v3; // x3
  AssetManager__coUnloadUnusedAssets_d__137_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **wait_5__2; // x1
  bool v24; // w21
  System_Int32_array **v25; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  AssetManager_ResourceUnloadEventHandler_o *v33; // x0
  BattleServantConfConponent_o *p_downLoadWaitList; // x20
  AssetManager_ResourceUnloadEventHandler_o *downLoadWaitList; // t1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  v4 = this;
  if ( (byte_42E7520 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (AssetManager__coUnloadUnusedAssets_d__137_o *)sub_B5D5C4(
                                                            &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7);
    byte_42E7520 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    downLoadWaitList = (AssetManager_ResourceUnloadEventHandler_o *)_4__this->fields.downLoadWaitList;
    p_downLoadWaitList = (BattleServantConfConponent_o *)&_4__this->fields.downLoadWaitList;
    v33 = downLoadWaitList;
    *(_WORD *)(&p_downLoadWaitList[-1].fields.isEquip + 3) = 0;
    if ( downLoadWaitList )
    {
      AssetManager_ResourceUnloadEventHandler__Invoke(v33, method);
      p_downLoadWaitList->klass = 0LL;
      sub_B5D560(p_downLoadWaitList, 0LL, v36, v37, v38, v39, v40, v41);
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_8;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
  v4->fields._wait_5__2 = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields._wait_5__2,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
LABEL_8:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__137_o *)AssetManager__LoadIsBusy(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v24 = 1;
      BYTE4(_4__this->fields.writeRequestThread) = 1;
      v25 = (System_Int32_array **)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v4->fields.__2__current = (Il2CppObject *)v25;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, v25, v27, v28, v29, v30, v31, v32);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return v24;
    }
LABEL_20:
    sub_B5D69C(this, method);
  }
  wait_5__2 = (System_Int32_array **)v4->fields._wait_5__2;
  v4->fields.__2__current = (Il2CppObject *)wait_5__2;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, wait_5__2, v17, v18, v19, v20, v21, v22);
  v24 = 1;
  v4->fields.__1__state = 1;
  return v24;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssetManager__coUnloadUnusedAssets_d__137_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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