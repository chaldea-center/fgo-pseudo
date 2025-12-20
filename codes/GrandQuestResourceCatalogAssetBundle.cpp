void GrandQuestResourceCatalogAssetBundle___ctor(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssetStorageLoadWrapper_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D27408 & 1) == 0 )
  {
    sub_1C94098(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C94098(&GrandQuestResourceContents_TypeInfo);
    byte_4D27408 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_1C942E4(GrandQuestResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct GrandQuestResourceContents_o *)v3;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Contents_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (AssetStorageLoadWrapper_o *)sub_1C942E4(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v10, 0);
  this->fields.assetStorageLoadWrapper = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


UnityEngine_GameObject_o *GrandQuestResourceCatalogAssetBundle__GetBgEffectPrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0

  if ( (byte_4D2740D & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&StringLiteral_18963/*"ef_grquest_bg"*/);
    byte_4D2740D = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1C942F0(0, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51893132(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_18963/*"ef_grquest_bg"*/,
                                       (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
}


UnityEngine_GameObject_o *GrandQuestResourceCatalogAssetBundle__GetClassBoardPrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0

  if ( (byte_4D2740B & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&StringLiteral_7163/*"GrandQuestClassBoardPrefab"*/);
    byte_4D2740B = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1C942F0(0, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51893132(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_7163/*"GrandQuestClassBoardPrefab"*/,
                                       (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
}


UnityEngine_GameObject_o *GrandQuestResourceCatalogAssetBundle__GetClassServantNamePrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0

  if ( (byte_4D2740C & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&StringLiteral_18964/*"ef_grquest_name"*/);
    byte_4D2740C = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1C942F0(0, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51893132(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_18964/*"ef_grquest_name"*/,
                                       (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o GrandQuestResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        GrandQuestResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_31F65B8 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__51893132; // x23
  __int64 *v14; // x1
  __int64 v15; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // x0
  void *v17; // x1
  _QWORD v18[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C6A188();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  if ( !assetData )
    goto LABEL_12;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              assetData,
                              name,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51893132, 0, 0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__51893132 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v14[2])(
        v15,
        v14,
        Object_object__51893132,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C942F0(v11, v12);
  }
  memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  memcpy((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), v10);
LABEL_11:
  v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL),
                                                                    v10);
  result.monitor = v17;
  result.klass = v16;
  return result;
}


Il2CppObject *GrandQuestResourceCatalogAssetBundle__GetObject_object_(
        GrandQuestResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_31F64F4 *method)
{
  Il2CppObject *Object_object__51893132; // x20

  if ( !method->rgctx_data )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    this = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C6A188();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              assetData,
                              name,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__51893132,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51893132 )
LABEL_11:
    sub_1C942F0(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__51893132,
           (const MethodInfo_31F4790 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
}


void GrandQuestResourceCatalogAssetBundle__LoadAssetStorage(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_String_o *assetBundlePath,
        AssetLoader_LoadEndDataHandler_o *loadCallback,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    goto LABEL_5;
  assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                           assetStorageLoadWrapper,
                                                           assetBundlePath,
                                                           loadCallback,
                                                           3,
                                                           0);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
    return;
  if ( !loadCallback )
LABEL_5:
    sub_1C942F0(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))loadCallback->fields.invoke_impl)(
    loadCallback->fields.method_code,
    0,
    loadCallback->fields.method);
}


void GrandQuestResourceCatalogAssetBundle__LoadEnd(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  char *Object_object; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  struct AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x1
  char *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Action_o *loadEndCallback; // x8

  if ( (byte_4D2740E & 1) == 0 )
  {
    sub_1C94098(&Method_GrandQuestResourceCatalogAssetBundle_GetObject_GrandQuestFolderBoardComponent___);
    sub_1C94098(&StringLiteral_7164/*"GrandQuestFolderBoardPrefab"*/);
    byte_4D2740E = 1;
  }
  Object_object = (char *)GrandQuestResourceCatalogAssetBundle__GetObject_object_(
                            this,
                            this->fields.effectAssetData,
                            (System_String_o *)StringLiteral_7164/*"GrandQuestFolderBoardPrefab"*/,
                            (const MethodInfo_31F64F4 *)Method_GrandQuestResourceCatalogAssetBundle_GetObject_GrandQuestFolderBoardComponent___);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_7;
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  v13 = Object_object;
  Contents_k__BackingField->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&Contents_k__BackingField->fields,
    (int32_t)boardUiAtlasManagerUnit,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Object_object = (char *)this->fields._Contents_k__BackingField;
  if ( !Object_object
    || (*((_QWORD *)Object_object + 3) = v13,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(Object_object + 24), (int32_t)v13, v14, v15, v16, v17, v18, v19),
        (loadEndCallback = this->fields.loadEndCallback) == 0) )
  {
LABEL_7:
    sub_1C942F0(Object_object, v4);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))loadEndCallback->fields.invoke_impl)(
    loadEndCallback->fields.method_code,
    loadEndCallback->fields.method);
}


void GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x20
  System_Action_object__o *v19; // x21
  ChainableActionBase_o *v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Action_object__o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  ChainableActionParallel_o *v35; // x21
  __int64 v36; // x20
  System_Action_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  if ( (byte_4D27409 & 1) == 0 )
  {
    sub_1C94098(&System_Action___TypeInfo);
    sub_1C94098(&System_Action_Action____TypeInfo);
    sub_1C94098(&System_Action_Action__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManagerUnit_TypeInfo);
    sub_1C94098(&ChainableActionParallel_TypeInfo);
    sub_1C94098(&Method_GrandQuestResourceCatalogAssetBundle_LoadEnd__);
    sub_1C94098(&Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_0__);
    sub_1C94098(&Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_1__);
    sub_1C94098(&StringLiteral_7165/*"GrandReleaseQuest"*/);
    byte_4D27409 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadEndCallback,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v11 = (AtlasManagerUnit_o *)sub_1C942E4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v11, (System_String_o *)StringLiteral_7165/*"GrandReleaseQuest"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v11;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = sub_1C94140(System_Action_Action____TypeInfo, 2);
  v19 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_0__,
    0);
  if ( !v18 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)v19, v22, v23, v24, v25, v26, v27);
  v28 = (System_Action_object__o *)sub_1C942E4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)this,
    Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_1__,
    0);
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_12;
  *(_QWORD *)(v18 + 40) = v28;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 40), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (ChainableActionParallel_o *)sub_1C942E4(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49732720(v35, (System_Action_Action__array *)v18, 0);
  v36 = sub_1C94140(System_Action___TypeInfo, 1);
  v37 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_GrandQuestResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v36 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v36 + 24) )
LABEL_12:
    sub_1C942F8(v20);
  *(_QWORD *)(v36 + 32) = v37;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v36 + 32), (int32_t)v37, v38, v39, v40, v41, v42, v43);
  if ( !v35 || (v20 = ChainableActionBase__Final((ChainableActionBase_o *)v35, (System_Action_array *)v36, 0)) == 0 )
LABEL_11:
    sub_1C942F0(v20, v21);
  ChainableActionBase__Execute(v20, 0);
}


void GrandQuestResourceCatalogAssetBundle__ReleaseAll(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C942F0(0, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
}


void GrandQuestResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  AtlasManagerUnit_o *v29; // x19
  System_Action_o *v30; // x21

  if ( (byte_4D2740A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManagerUnit_TypeInfo);
    sub_1C94098(&Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0__ReloadBoardUIAtlas_b__0__);
    sub_1C94098(&GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_TypeInfo);
    sub_1C94098(&StringLiteral_7165/*"GrandReleaseQuest"*/);
    byte_4D2740A = 1;
  }
  v5 = sub_1C942E4(GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v22 = (AtlasManagerUnit_o *)sub_1C942E4(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v22, (System_String_o *)StringLiteral_7165/*"GrandReleaseQuest"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v22;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.boardUiAtlasManagerUnit,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.boardUiAtlasManagerUnit;
  v30 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v29 )
LABEL_8:
    sub_1C942F0(v6, v7);
  AtlasManagerUnit__Load(v29, v30, 1, 0);
}


void GrandQuestResourceCatalogAssetBundle__SetSpriteOfUiAtlas(
        GrandQuestResourceCatalogAssetBundle_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C942F0(0, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0);
}


void GrandQuestResourceCatalogAssetBundle___LoadSystemAsset_b__15_0(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  AssetLoader_LoadEndDataHandler_o *v20; // x20
  const MethodInfo *v21; // x3

  if ( (byte_4D2740F & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0__LoadSystemAsset_b__2__);
    sub_1C94098(&GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_TypeInfo);
    sub_1C94098(&StringLiteral_7165/*"GrandReleaseQuest"*/);
    byte_4D2740F = 1;
  }
  v5 = sub_1C942E4(GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = f;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0__LoadSystemAsset_b__2__,
    0);
  GrandQuestResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_7165/*"GrandReleaseQuest"*/, v20, v21);
}


void GrandQuestResourceCatalogAssetBundle___LoadSystemAsset_b__15_1(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C942F0(0, f);
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0);
}


GrandQuestResourceContents_o *GrandQuestResourceCatalogAssetBundle__get_Contents(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


void GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0___ctor(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0___LoadSystemAsset_b__2(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct GrandQuestResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.effectAssetData = asset,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.effectAssetData,
          (int32_t)asset,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = this->fields.f) == 0) )
  {
    sub_1C942F0(_4__this, asset);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}


void GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0___ctor(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0___ReloadBoardUIAtlas_b__0(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct GrandQuestResourceCatalogAssetBundle_o *_4__this; // x8
  GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *v9; // x19
  struct GrandQuestResourceCatalogAssetBundle_o *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        (this = (GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *)_4__this->fields._Contents_k__BackingField) == 0) )
  {
    sub_1C942F0(this, method);
  }
  boardUiAtlasManagerUnit = (struct GrandQuestResourceCatalogAssetBundle_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this->fields.__4__this = boardUiAtlasManagerUnit;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)boardUiAtlasManagerUnit, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v9->fields.callback, 0);
}