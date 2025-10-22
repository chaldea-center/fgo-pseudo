void GrandQuestResourceCatalogAssetBundle___ctor(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  AssetStorageLoadWrapper_o *v4; // x20

  if ( (byte_4C51A6E & 1) == 0 )
  {
    sub_1C3E564(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C3E564(&GrandQuestResourceContents_TypeInfo);
    byte_4C51A6E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (Il2CppObject *)sub_1C3E7B0(GrandQuestResourceContents_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._Contents_k__BackingField = (struct GrandQuestResourceContents_o *)v3;
  sub_1C3E508(&this->fields._Contents_k__BackingField, v3);
  v4 = (AssetStorageLoadWrapper_o *)sub_1C3E7B0(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v4, 0);
  this->fields.assetStorageLoadWrapper = v4;
  sub_1C3E508(&this->fields, v4);
}


UnityEngine_GameObject_o *GrandQuestResourceCatalogAssetBundle__GetBgEffectPrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0

  if ( (byte_4C51A73 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&StringLiteral_18858/*"ef_grquest_bg"*/);
    byte_4C51A73 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1C3E7C0(0, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51228128(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_18858/*"ef_grquest_bg"*/,
                                       (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
}


UnityEngine_GameObject_o *GrandQuestResourceCatalogAssetBundle__GetClassBoardPrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0

  if ( (byte_4C51A71 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&StringLiteral_7151/*"GrandQuestClassBoardPrefab"*/);
    byte_4C51A71 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1C3E7C0(0, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51228128(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_7151/*"GrandQuestClassBoardPrefab"*/,
                                       (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
}


UnityEngine_GameObject_o *GrandQuestResourceCatalogAssetBundle__GetClassServantNamePrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0

  if ( (byte_4C51A72 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&StringLiteral_18859/*"ef_grquest_name"*/);
    byte_4C51A72 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1C3E7C0(0, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51228128(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_18859/*"ef_grquest_name"*/,
                                       (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o GrandQuestResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        GrandQuestResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_3152EF4 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__51228128; // x23
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
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C8ECD4();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v10 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v11 = memset((char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL), 0, v10);
  if ( !assetData )
    goto LABEL_12;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              assetData,
                              name,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51228128, 0, 0);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    if ( Object_object__51228128 )
    {
      v14 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v15 = *v14;
      v18[0] = (char *)v18 - ((v10 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, _QWORD *, _QWORD))v14[2])(
        v15,
        v14,
        Object_object__51228128,
        v18,
        v18[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C3E7C0(v11, v12);
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
        const MethodInfo_3152E30 *method)
{
  Il2CppObject *Object_object__51228128; // x20

  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    this = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C8ECD4();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              assetData,
                              name,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__51228128,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__51228128 )
LABEL_11:
    sub_1C3E7C0(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__51228128,
           (const MethodInfo_31510CC *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
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
    sub_1C3E7C0(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))loadCallback->fields.invoke_impl)(
    loadCallback->fields.method_code,
    0,
    loadCallback->fields.method);
}


void GrandQuestResourceCatalogAssetBundle__LoadEnd(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  _QWORD *Object_object; // x0
  __int64 v4; // x1
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  struct AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x1
  _QWORD *v7; // x20
  struct System_Action_o *loadEndCallback; // x8

  if ( (byte_4C51A74 & 1) == 0 )
  {
    sub_1C3E564(&Method_GrandQuestResourceCatalogAssetBundle_GetObject_GrandQuestFolderBoardComponent___);
    sub_1C3E564(&StringLiteral_7152/*"GrandQuestFolderBoardPrefab"*/);
    byte_4C51A74 = 1;
  }
  Object_object = GrandQuestResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.effectAssetData,
                    (System_String_o *)StringLiteral_7152/*"GrandQuestFolderBoardPrefab"*/,
                    (const MethodInfo_3152E30 *)Method_GrandQuestResourceCatalogAssetBundle_GetObject_GrandQuestFolderBoardComponent___);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField )
    goto LABEL_7;
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  v7 = Object_object;
  Contents_k__BackingField->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C3E508(&Contents_k__BackingField->fields, boardUiAtlasManagerUnit);
  Object_object = &this->fields._Contents_k__BackingField->klass;
  if ( !Object_object
    || (Object_object[3] = v7,
        Object_object = (_QWORD *)sub_1C3E508(Object_object + 3, v7),
        (loadEndCallback = this->fields.loadEndCallback) == 0) )
  {
LABEL_7:
    sub_1C3E7C0(Object_object, v4);
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v6; // x21
  __int64 v7; // x20
  System_Action_object__o *v8; // x21
  ChainableActionBase_o *v9; // x0
  __int64 v10; // x1
  System_Action_object__o *v11; // x21
  ChainableActionParallel_o *v12; // x21
  __int64 v13; // x20
  System_Action_o *v14; // x22

  if ( (byte_4C51A6F & 1) == 0 )
  {
    sub_1C3E564(&System_Action___TypeInfo);
    sub_1C3E564(&System_Action_Action____TypeInfo);
    sub_1C3E564(&System_Action_Action__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManagerUnit_TypeInfo);
    sub_1C3E564(&ChainableActionParallel_TypeInfo);
    sub_1C3E564(&Method_GrandQuestResourceCatalogAssetBundle_LoadEnd__);
    sub_1C3E564(&Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_0__);
    sub_1C3E564(&Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_1__);
    sub_1C3E564(&StringLiteral_7153/*"GrandReleaseQuest"*/);
    byte_4C51A6F = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1C3E508(&this->fields.loadEndCallback, callback);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v6 = (AtlasManagerUnit_o *)sub_1C3E7B0(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v6, (System_String_o *)StringLiteral_7153/*"GrandReleaseQuest"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v6;
  sub_1C3E508(&this->fields.boardUiAtlasManagerUnit, v6);
  v7 = sub_1C3E60C(System_Action_Action____TypeInfo, 2);
  v8 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_0__,
    0);
  if ( !v7 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_12;
  *(_QWORD *)(v7 + 32) = v8;
  sub_1C3E508(v7 + 32, v8);
  v11 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_1__,
    0);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_12;
  *(_QWORD *)(v7 + 40) = v11;
  sub_1C3E508(v7 + 40, v11);
  v12 = (ChainableActionParallel_o *)sub_1C3E7B0(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_49115312(v12, (System_Action_Action__array *)v7, 0);
  v13 = sub_1C3E60C(System_Action___TypeInfo, 1);
  v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_GrandQuestResourceCatalogAssetBundle_LoadEnd__, 0);
  if ( !v13 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v13 + 24) )
LABEL_12:
    sub_1C3E7C8(v9, v10);
  *(_QWORD *)(v13 + 32) = v14;
  v9 = (ChainableActionBase_o *)sub_1C3E508(v13 + 32, v14);
  if ( !v12 || (v9 = ChainableActionBase__Final((ChainableActionBase_o *)v12, (System_Action_array *)v13, 0)) == 0 )
LABEL_11:
    sub_1C3E7C0(v9, v10);
  ChainableActionBase__Execute(v9, 0);
}


void GrandQuestResourceCatalogAssetBundle__ReleaseAll(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1C3E7C0(0, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
}


void GrandQuestResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v10; // x23
  AtlasManagerUnit_o *v11; // x19
  System_Action_o *v12; // x21

  if ( (byte_4C51A70 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManagerUnit_TypeInfo);
    sub_1C3E564(&Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0__ReloadBoardUIAtlas_b__0__);
    sub_1C3E564(&GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_TypeInfo);
    sub_1C3E564(&StringLiteral_7153/*"GrandReleaseQuest"*/);
    byte_4C51A70 = 1;
  }
  v5 = (Il2CppObject *)sub_1C3E7B0(GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_8;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C3E508(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C3E508(&v5[1].monitor, callback);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v10 = (AtlasManagerUnit_o *)sub_1C3E7B0(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v10, (System_String_o *)StringLiteral_7153/*"GrandReleaseQuest"*/, assetStorageLoadWrapper, 0);
  this->fields.boardUiAtlasManagerUnit = v10;
  sub_1C3E508(&this->fields.boardUiAtlasManagerUnit, v10);
  v11 = this->fields.boardUiAtlasManagerUnit;
  v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    v5,
    Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0__ReloadBoardUIAtlas_b__0__,
    0);
  if ( !v11 )
LABEL_8:
    sub_1C3E7C0(v6, v7);
  AtlasManagerUnit__Load(v11, v12, 1, 0);
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
    sub_1C3E7C0(0, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0);
}


void GrandQuestResourceCatalogAssetBundle___LoadSystemAsset_b__15_0(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  AssetLoader_LoadEndDataHandler_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_4C51A75 & 1) == 0 )
  {
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0__LoadSystemAsset_b__2__);
    sub_1C3E564(&GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_TypeInfo);
    sub_1C3E564(&StringLiteral_7153/*"GrandReleaseQuest"*/);
    byte_4C51A75 = 1;
  }
  v5 = (Il2CppObject *)sub_1C3E7B0(GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5[1].monitor = this;
  sub_1C3E508(&v5[1].monitor, this);
  v5[1].klass = (Il2CppClass *)f;
  sub_1C3E508(&v5[1], f);
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v8,
    v5,
    Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0__LoadSystemAsset_b__2__,
    0);
  GrandQuestResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_7153/*"GrandReleaseQuest"*/, v8, v9);
}


void GrandQuestResourceCatalogAssetBundle___LoadSystemAsset_b__15_1(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1C3E7C0(0, f);
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
  struct GrandQuestResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.effectAssetData = asset,
        _4__this = (struct GrandQuestResourceCatalogAssetBundle_o *)sub_1C3E508(
                                                                      &_4__this->fields.effectAssetData,
                                                                      asset),
        (f = this->fields.f) == 0) )
  {
    sub_1C3E7C0(_4__this, asset);
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
  struct GrandQuestResourceCatalogAssetBundle_o *_4__this; // x8
  GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *v3; // x19
  struct GrandQuestResourceCatalogAssetBundle_o *boardUiAtlasManagerUnit; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *)_4__this->fields._Contents_k__BackingField) == 0) )
  {
    sub_1C3E7C0(this, method);
  }
  boardUiAtlasManagerUnit = (struct GrandQuestResourceCatalogAssetBundle_o *)_4__this->fields.boardUiAtlasManagerUnit;
  this->fields.__4__this = boardUiAtlasManagerUnit;
  sub_1C3E508(&this->fields, boardUiAtlasManagerUnit);
  ActionExtensions__Call(v3->fields.callback, 0);
}