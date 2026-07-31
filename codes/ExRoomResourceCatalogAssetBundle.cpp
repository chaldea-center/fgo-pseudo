void ExRoomResourceCatalogAssetBundle___ctor(ExRoomResourceCatalogAssetBundle_o *this, const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932D50 & 1) == 0 )
  {
    sub_21FFC50(&AssetStorageLoadWrapper_TypeInfo);
    byte_5932D50 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (AssetStorageLoadWrapper_o *)sub_21FFEBC(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v3, 0);
  this->fields.assetStorageLoadWrapper = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


UnityEngine_GameObject_o *ExRoomResourceCatalogAssetBundle__CreateGameObject(
        ExRoomResourceCatalogAssetBundle_o *this,
        System_String_o *prefabName,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  ExRoomResourceCatalogAssetBundle_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *GameObject; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21

  v6 = this;
  if ( (byte_5932D57 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ExRoomResourceCatalogAssetBundle_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D57 = 1;
  }
  GameObject = (Il2CppObject *)ExRoomResourceCatalogAssetBundle__GetGameObject(
                                 this,
                                 v6->fields.prefabAssetData,
                                 prefabName,
                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v12 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)GameObject, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    v12 = UnityEngine_Object__Instantiate_object_(
            GameObject,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0) )
      GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v12, parent, 0);
  }
  return (UnityEngine_GameObject_o *)v12;
}


ExRoomQuestComponent_o *ExRoomResourceCatalogAssetBundle__CreateQuestPanelPrefab(
        ExRoomResourceCatalogAssetBundle_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ExRoomQuestComponent_o *result; // x0

  if ( (byte_5932D54 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ExRoomQuestComponent___);
    sub_21FFC50(&StringLiteral_11386/*"QuestPanel"*/);
    byte_5932D54 = 1;
  }
  result = (ExRoomQuestComponent_o *)ExRoomResourceCatalogAssetBundle__CreateGameObject(
                                       this,
                                       (System_String_o *)StringLiteral_11386/*"QuestPanel"*/,
                                       parent,
                                       v3);
  if ( result )
    return (ExRoomQuestComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)result,
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ExRoomQuestComponent___);
  return result;
}


ExRoomShopComponent_o *ExRoomResourceCatalogAssetBundle__CreateShopPanelPrefab(
        ExRoomResourceCatalogAssetBundle_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ExRoomShopComponent_o *result; // x0

  if ( (byte_5932D55 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ExRoomShopComponent___);
    sub_21FFC50(&StringLiteral_13369/*"ShopPanel"*/);
    byte_5932D55 = 1;
  }
  result = (ExRoomShopComponent_o *)ExRoomResourceCatalogAssetBundle__CreateGameObject(
                                      this,
                                      (System_String_o *)StringLiteral_13369/*"ShopPanel"*/,
                                      parent,
                                      v3);
  if ( result )
    return (ExRoomShopComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)result,
                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ExRoomShopComponent___);
  return result;
}


ExRoomTopComponent_o *ExRoomResourceCatalogAssetBundle__CreateTopPanelPrefab(
        ExRoomResourceCatalogAssetBundle_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ExRoomTopComponent_o *result; // x0

  if ( (byte_5932D53 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ExRoomTopComponent___);
    sub_21FFC50(&StringLiteral_15122/*"TopPanel"*/);
    byte_5932D53 = 1;
  }
  result = (ExRoomTopComponent_o *)ExRoomResourceCatalogAssetBundle__CreateGameObject(
                                     this,
                                     (System_String_o *)StringLiteral_15122/*"TopPanel"*/,
                                     parent,
                                     v3);
  if ( result )
    return (ExRoomTopComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)result,
                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ExRoomTopComponent___);
  return result;
}


UnityEngine_GameObject_o *ExRoomResourceCatalogAssetBundle__GetGameObject(
        ExRoomResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_5932D56 & 1) == 0 )
  {
    this = (ExRoomResourceCatalogAssetBundle_o *)sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    byte_5932D56 = 1;
  }
  if ( !assetData )
    sub_21FFECC(this, assetData);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58323140(
                                       assetData,
                                       name,
                                       (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
}


Il2CppObject *ExRoomResourceCatalogAssetBundle__GetPrefabComponent_object_(
        ExRoomResourceCatalogAssetBundle_o *this,
        System_String_o *prefabName,
        const MethodInfo_3878E4C *method)
{
  const MethodInfo_3878E8C **rgctx_data; // x8
  ExRoomResourceCatalogAssetBundle_o *v5; // x20

  rgctx_data = (const MethodInfo_3878E8C **)method->rgctx_data;
  v5 = this;
  if ( !rgctx_data )
  {
    this = (ExRoomResourceCatalogAssetBundle_o *)sub_2237B54();
    rgctx_data = (const MethodInfo_3878E8C **)method->rgctx_data;
  }
  return ExRoomResourceCatalogAssetBundle__GetPrefabComponent_object__59215500(
           this,
           v5->fields.prefabAssetData,
           prefabName,
           *rgctx_data);
}


Il2CppObject *ExRoomResourceCatalogAssetBundle__GetPrefabComponent_object__59215500(
        ExRoomResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *assetName,
        const MethodInfo_3878E8C *method)
{
  __int64 v7; // x1
  Il2CppObject *Object_object__58323140; // x20

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    this = (ExRoomResourceCatalogAssetBundle_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (ExRoomResourceCatalogAssetBundle_o *)sub_2237B54();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              assetData,
                              assetName,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (ExRoomResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Object_object__58323140,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !Object_object__58323140 )
LABEL_11:
    sub_21FFECC(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__58323140,
           (const MethodInfo_3883A78 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
}


UnityEngine_GameObject_o *ExRoomResourceCatalogAssetBundle__GetPrefabObject(
        ExRoomResourceCatalogAssetBundle_o *this,
        System_String_o *prefabName,
        const MethodInfo *method)
{
  AssetData_o *prefabAssetData; // x0

  if ( (byte_5932D52 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    byte_5932D52 = 1;
  }
  prefabAssetData = this->fields.prefabAssetData;
  if ( !prefabAssetData )
    sub_21FFECC(0, prefabName);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58323140(
                                       prefabAssetData,
                                       prefabName,
                                       (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
}


void ExRoomResourceCatalogAssetBundle__LoadAsset(
        ExRoomResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  ChainableActionBase_o *v6; // x0
  __int64 v7; // x1
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  AtlasManagerUnit_o *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x20
  System_Action_object__o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_object__o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  ChainableActionParallel_o *v43; // x21
  __int64 v44; // x20
  System_Action_o *v45; // x22
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_5932D51 & 1) == 0 )
  {
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManagerUnit_TypeInfo);
    sub_21FFC50(&ChainableActionParallel_TypeInfo);
    sub_21FFC50(&Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0__LoadAsset_b__0__);
    sub_21FFC50(&Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0__LoadAsset_b__1__);
    sub_21FFC50(&Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0__LoadAsset_b__2__);
    sub_21FFC50(&ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_TypeInfo);
    sub_21FFC50(&StringLiteral_6536/*"ExRoom"*/);
    byte_5932D51 = 1;
  }
  v5 = sub_21FFEBC(ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v21 = (AtlasManagerUnit_o *)sub_21FFEBC(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v21, (System_String_o *)StringLiteral_6536/*"ExRoom"*/, assetStorageLoadWrapper, 0);
  this->fields.exRoomAtlasManagerUnit = v21;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exRoomAtlasManagerUnit,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = sub_21FFD10(System_Action_Action____TypeInfo, 2);
  v29 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0__LoadAsset_b__0__,
    0);
  if ( !v28 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v28 + 24) )
    goto LABEL_13;
  *(_QWORD *)(v28 + 32) = v29;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0__LoadAsset_b__1__,
    0);
  if ( (*(_DWORD *)(v28 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  *(_QWORD *)(v28 + 40) = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 40), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (ChainableActionParallel_o *)sub_21FFEBC(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_55903544(v43, (System_Action_Action__array *)v28, 0);
  v44 = sub_21FFD10(System_Action___TypeInfo, 1);
  v45 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0__LoadAsset_b__2__,
    0);
  if ( !v44 )
    goto LABEL_12;
  if ( !*(_DWORD *)(v44 + 24) )
LABEL_13:
    sub_21FFED4(v6);
  *(_QWORD *)(v44 + 32) = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 32), (int32_t)v45, v46, v47, v48, v49, v50, v51);
  if ( !v43 || (v6 = ChainableActionBase__Final((ChainableActionBase_o *)v43, (System_Action_array *)v44, 0)) == 0 )
LABEL_12:
    sub_21FFECC(v6, v7);
  ChainableActionBase__Execute(v6, 0);
}


void ExRoomResourceCatalogAssetBundle__LoadAssetStorage(
        ExRoomResourceCatalogAssetBundle_o *this,
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
    sub_21FFECC(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))loadCallback->fields.invoke_impl)(
    loadCallback->fields.method_code,
    0,
    loadCallback->fields.method);
}


void ExRoomResourceCatalogAssetBundle__ReleaseAll(ExRoomResourceCatalogAssetBundle_o *this, const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_21FFECC(0, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0);
}


void ExRoomResourceCatalogAssetBundle__SetSprite(
        ExRoomResourceCatalogAssetBundle_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *exRoomAtlasManagerUnit; // x0

  exRoomAtlasManagerUnit = this->fields.exRoomAtlasManagerUnit;
  if ( !exRoomAtlasManagerUnit )
    sub_21FFECC(0, sprite);
  AtlasManagerUnit__SetUI(exRoomAtlasManagerUnit, sprite, spriteName, 0);
}


void ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0___ctor(
        ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0___LoadAsset_b__0(
        ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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
  ExRoomResourceCatalogAssetBundle_o *_4__this; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20
  const MethodInfo *v22; // x3

  if ( (byte_5932D58 & 1) == 0 )
  {
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1__LoadAsset_b__3__);
    sub_21FFC50(&ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_TypeInfo);
    sub_21FFC50(&StringLiteral_6536/*"ExRoom"*/);
    byte_5932D58 = 1;
  }
  v5 = sub_21FFEBC(ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 16) = f,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)f, v14, v15, v16, v17, v18, v19),
        _4__this = this->fields.__4__this,
        v21 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo),
        AssetLoader_LoadEndDataHandler___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1__LoadAsset_b__3__,
          0),
        !_4__this) )
  {
    sub_21FFECC(v6, v7);
  }
  ExRoomResourceCatalogAssetBundle__LoadAssetStorage(_4__this, (System_String_o *)StringLiteral_6536/*"ExRoom"*/, v21, v22);
}


void ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0___LoadAsset_b__1(
        ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  struct ExRoomResourceCatalogAssetBundle_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_o *)_4__this->fields.exRoomAtlasManagerUnit) == 0 )
  {
    sub_21FFECC(this, f);
  }
  AtlasManagerUnit__Load((AtlasManagerUnit_o *)this, f, 3, 0);
}


void ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0___LoadAsset_b__2(
        ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1___ctor(
        ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1___LoadAsset_b__3(
        ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ExRoomResourceCatalogAssetBundle___c__DisplayClass7_0_o *CS___8__locals1; // x8
  ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_o *v9; // x19
  struct System_Action_o *f; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (v9 = this,
        (this = (ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_o *)CS___8__locals1->fields.__4__this) == 0)
    || (this[1].klass = (ExRoomResourceCatalogAssetBundle___c__DisplayClass7_1_c *)asset,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this[1],
          (int32_t)asset,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (f = v9->fields.f) == 0) )
  {
    sub_21FFECC(this, asset);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))f->fields.invoke_impl)(f->fields.method_code, f->fields.method);
}