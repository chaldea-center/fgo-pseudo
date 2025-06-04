void __fastcall GrandQuestResourceCatalogAssetBundle___ctor(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x20
  AssetStorageLoadWrapper_o *v5; // x20

  if ( (byte_4AFCE51 & 1) == 0 )
  {
    sub_1BC3008(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1BC3008(&GrandQuestResourceContents_TypeInfo, v3);
    byte_4AFCE51 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (Il2CppObject *)sub_1BC3254(GrandQuestResourceContents_TypeInfo);
  System_Object___ctor(v4, 0LL);
  this->fields._Contents_k__BackingField = (struct GrandQuestResourceContents_o *)v4;
  sub_1BC2FAC(&this->fields._Contents_k__BackingField);
  v5 = (AssetStorageLoadWrapper_o *)sub_1BC3254(AssetStorageLoadWrapper_TypeInfo);
  AssetStorageLoadWrapper___ctor(v5, 0LL);
  this->fields.assetStorageLoadWrapper = v5;
  sub_1BC2FAC(&this->fields);
}


UnityEngine_GameObject_o *__fastcall GrandQuestResourceCatalogAssetBundle__GetBgEffectPrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *effectAssetData; // x0

  if ( (byte_4AFCE56 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&StringLiteral_18661/*"ef_grquest_bg"*/, v3);
    byte_4AFCE56 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1BC3264(0LL, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_18661/*"ef_grquest_bg"*/,
                                       (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
}


UnityEngine_GameObject_o *__fastcall GrandQuestResourceCatalogAssetBundle__GetClassBoardPrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *effectAssetData; // x0

  if ( (byte_4AFCE54 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&StringLiteral_7079/*"GrandQuestClassBoardPrefab"*/, v3);
    byte_4AFCE54 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1BC3264(0LL, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_7079/*"GrandQuestClassBoardPrefab"*/,
                                       (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
}


UnityEngine_GameObject_o *__fastcall GrandQuestResourceCatalogAssetBundle__GetClassServantNamePrefab(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AssetData_o *effectAssetData; // x0

  if ( (byte_4AFCE55 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, method);
    sub_1BC3008(&StringLiteral_18662/*"ef_grquest_name"*/, v3);
    byte_4AFCE55 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    sub_1BC3264(0LL, method);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                       effectAssetData,
                                       (System_String_o *)StringLiteral_18662/*"ef_grquest_name"*/,
                                       (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
}


// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __fastcall GrandQuestResourceCatalogAssetBundle__GetObject___Il2CppFullySharedGenericType_(
        GrandQuestResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_30577C0 *method)
{
  __int64 v4; // x4
  __int64 v5; // x20
  __int64 v8; // x8
  __int64 v10; // x1
  __int64 v11; // x21
  void *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__50213776; // x23
  __int64 *v15; // x1
  __int64 v16; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v17; // x0 OVERLAPPED
  void *v18; // x1
  __int64 v19[2]; // [xsp+0h] [xbp-10h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  v5 = v4;
  v19[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v8 = *(_QWORD *)(v4 + 56);
  if ( !v8 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, assetData);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    v8 = *(_QWORD *)(v5 + 56);
    if ( !v8 )
    {
      sub_1C134C8();
      v8 = *(_QWORD *)(v5 + 56);
    }
  }
  v11 = *(unsigned int *)(*(_QWORD *)v8 + 252LL);
  v12 = memset((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), 0, *(_DWORD *)(*(_QWORD *)v8 + 252LL));
  if ( !assetData )
    goto LABEL_12;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              assetData,
                              name,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50213776, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( Object_object__50213776 )
    {
      v15 = *(__int64 **)(*(_QWORD *)(v5 + 56) + 8LL);
      v16 = *v15;
      v19[0] = (__int64)v19 - ((v11 + 15) & 0x1FFFFFFF0LL);
      ((void (__fastcall *)(__int64, __int64 *, Il2CppObject *, __int64 *, __int64))v15[2])(
        v16,
        v15,
        Object_object__50213776,
        v19,
        v19[0]);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BC3264(v12, v13);
  }
  memset((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), 0, v11);
  memcpy((char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), (char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL), v11);
LABEL_11:
  v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memcpy(
                                                                    (void *)method,
                                                                    (char *)v19 - ((v11 + 15) & 0x1FFFFFFF0LL),
                                                                    v11);
  result.monitor = v18;
  result.klass = v17;
  return result;
}


Il2CppObject *__fastcall GrandQuestResourceCatalogAssetBundle__GetObject_object_(
        GrandQuestResourceCatalogAssetBundle_o *this,
        AssetData_o *assetData,
        System_String_o *name,
        const MethodInfo_30576FC *method)
{
  __int64 v7; // x1
  Il2CppObject *Object_object__50213776; // x20

  if ( !method->rgctx_data )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, assetData);
    this = (GrandQuestResourceCatalogAssetBundle_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    if ( !method->rgctx_data )
      this = (GrandQuestResourceCatalogAssetBundle_o *)sub_1C134C8();
  }
  if ( !assetData )
    goto LABEL_11;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              assetData,
                              name,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandQuestResourceCatalogAssetBundle_o *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Object_object__50213776,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !Object_object__50213776 )
LABEL_11:
    sub_1BC3264(this, assetData);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)Object_object__50213776,
           (const MethodInfo_3055998 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
}


void __fastcall GrandQuestResourceCatalogAssetBundle__LoadAssetStorage(
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
                                                           0LL);
  if ( ((unsigned __int8)assetStorageLoadWrapper & 1) != 0 )
    return;
  if ( !loadCallback )
LABEL_5:
    sub_1BC3264(assetStorageLoadWrapper, assetBundlePath);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))loadCallback->fields.m_target)(
    loadCallback->fields.original_method_info,
    0LL,
    *(_QWORD *)&loadCallback->fields.extra_arg);
}


void __fastcall GrandQuestResourceCatalogAssetBundle__LoadEnd(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *Object_object; // x0
  __int64 v5; // x1
  struct GrandQuestResourceContents_o *Contents_k__BackingField; // x8
  _QWORD *v7; // x20
  struct System_Action_o *loadEndCallback; // x8

  if ( (byte_4AFCE57 & 1) == 0 )
  {
    sub_1BC3008(&Method_GrandQuestResourceCatalogAssetBundle_GetObject_GrandQuestFolderBoardComponent___, method);
    sub_1BC3008(&StringLiteral_7080/*"GrandQuestFolderBoardPrefab"*/, v3);
    byte_4AFCE57 = 1;
  }
  Object_object = GrandQuestResourceCatalogAssetBundle__GetObject_object_(
                    this,
                    this->fields.effectAssetData,
                    (System_String_o *)StringLiteral_7080/*"GrandQuestFolderBoardPrefab"*/,
                    (const MethodInfo_30576FC *)Method_GrandQuestResourceCatalogAssetBundle_GetObject_GrandQuestFolderBoardComponent___);
  Contents_k__BackingField = this->fields._Contents_k__BackingField;
  if ( !Contents_k__BackingField
    || (v7 = Object_object,
        Contents_k__BackingField->fields._BoardUiAtlasManagerUnit_k__BackingField = this->fields.boardUiAtlasManagerUnit,
        sub_1BC2FAC(&Contents_k__BackingField->fields),
        (Object_object = &this->fields._Contents_k__BackingField->klass) == 0LL)
    || (Object_object[3] = v7,
        Object_object = (_QWORD *)sub_1BC2FAC(Object_object + 3),
        (loadEndCallback = this->fields.loadEndCallback) == 0LL) )
  {
    sub_1BC3264(Object_object, v5);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))loadEndCallback->fields.m_target)(
    loadEndCallback->fields.original_method_info,
    *(_QWORD *)&loadEndCallback->fields.extra_arg);
}


void __fastcall GrandQuestResourceCatalogAssetBundle__LoadSystemAsset(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
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
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x20
  AtlasManagerUnit_o *v15; // x21
  System_Action_Action__array *v16; // x20
  System_Action_object__o *v17; // x21
  ChainableActionBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_object__o *v21; // x21
  ChainableActionParallel_o *v22; // x21
  System_Action_array *v23; // x20
  System_Action_o *v24; // x22

  if ( (byte_4AFCE52 & 1) == 0 )
  {
    sub_1BC3008(&System_Action___TypeInfo, callback);
    sub_1BC3008(&System_Action_Action____TypeInfo, v5);
    sub_1BC3008(&System_Action_Action__TypeInfo, v6);
    sub_1BC3008(&System_Action_TypeInfo, v7);
    sub_1BC3008(&AtlasManagerUnit_TypeInfo, v8);
    sub_1BC3008(&ChainableActionParallel_TypeInfo, v9);
    sub_1BC3008(&Method_GrandQuestResourceCatalogAssetBundle_LoadEnd__, v10);
    sub_1BC3008(&Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_0__, v11);
    sub_1BC3008(&Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_1__, v12);
    sub_1BC3008(&StringLiteral_7081/*"GrandReleaseQuest"*/, v13);
    byte_4AFCE52 = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1BC2FAC(&this->fields.loadEndCallback);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v15 = (AtlasManagerUnit_o *)sub_1BC3254(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v15, (System_String_o *)StringLiteral_7081/*"GrandReleaseQuest"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v15;
  sub_1BC2FAC(&this->fields.boardUiAtlasManagerUnit);
  v16 = (System_Action_Action__array *)sub_1BC30B0(System_Action_Action____TypeInfo, 2LL);
  v17 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_0__,
    0LL);
  if ( !v16 )
    goto LABEL_11;
  if ( !v16->max_length )
    goto LABEL_12;
  v16->m_Items[0] = (System_Action_Action__o *)v17;
  sub_1BC2FAC(v16->m_Items);
  v21 = (System_Action_object__o *)sub_1BC3254(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)this,
    Method_GrandQuestResourceCatalogAssetBundle__LoadSystemAsset_b__15_1__,
    0LL);
  if ( v16->max_length <= 1 )
    goto LABEL_12;
  v16->m_Items[1] = (System_Action_Action__o *)v21;
  sub_1BC2FAC(&v16->m_Items[1]);
  v22 = (ChainableActionParallel_o *)sub_1BC3254(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48135236(v22, v16, 0LL);
  v23 = (System_Action_array *)sub_1BC30B0(System_Action___TypeInfo, 1LL);
  v24 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_GrandQuestResourceCatalogAssetBundle_LoadEnd__, 0LL);
  if ( !v23 )
    goto LABEL_11;
  if ( !v23->max_length )
LABEL_12:
    sub_1BC326C(v18, v19, v20);
  v23->m_Items[0] = v24;
  v18 = (ChainableActionBase_o *)sub_1BC2FAC(v23->m_Items);
  if ( !v22 || (v18 = ChainableActionBase__Final((ChainableActionBase_o *)v22, v23, 0LL)) == 0LL )
LABEL_11:
    sub_1BC3264(v18, v19);
  ChainableActionBase__Execute(v18, 0LL);
}


void __fastcall GrandQuestResourceCatalogAssetBundle__ReleaseAll(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x0

  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
    sub_1BC3264(0LL, method);
  AssetStorageLoadWrapper__ReleaseAll(assetStorageLoadWrapper, 0LL);
}


void __fastcall GrandQuestResourceCatalogAssetBundle__ReloadBoardUIAtlas(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  AtlasManagerUnit_o *v14; // x23
  AtlasManagerUnit_o *v15; // x19
  System_Action_o *v16; // x21

  if ( (byte_4AFCE53 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&AtlasManagerUnit_TypeInfo, v5);
    sub_1BC3008(&Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0__ReloadBoardUIAtlas_b__0__, v6);
    sub_1BC3008(&GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_7081/*"GrandReleaseQuest"*/, v8);
    byte_4AFCE53 = 1;
  }
  v9 = (Il2CppObject *)sub_1BC3254(GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9[1].klass = (Il2CppClass *)this;
  sub_1BC2FAC(&v9[1]);
  v9[1].monitor = callback;
  sub_1BC2FAC(&v9[1].monitor);
  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( boardUiAtlasManagerUnit )
    AtlasManagerUnit__Release(boardUiAtlasManagerUnit, 0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  v14 = (AtlasManagerUnit_o *)sub_1BC3254(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v14, (System_String_o *)StringLiteral_7081/*"GrandReleaseQuest"*/, assetStorageLoadWrapper, 0LL);
  this->fields.boardUiAtlasManagerUnit = v14;
  sub_1BC2FAC(&this->fields.boardUiAtlasManagerUnit);
  v15 = this->fields.boardUiAtlasManagerUnit;
  v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v9,
    Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0__ReloadBoardUIAtlas_b__0__,
    0LL);
  if ( !v15 )
LABEL_8:
    sub_1BC3264(v10, v11);
  AtlasManagerUnit__Load(v15, v16, 1, 0LL);
}


void __fastcall GrandQuestResourceCatalogAssetBundle__SetSpriteOfUiAtlas(
        GrandQuestResourceCatalogAssetBundle_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1BC3264(0LL, sprite);
  AtlasManagerUnit__SetUI(boardUiAtlasManagerUnit, sprite, spriteName, 0LL);
}


void __fastcall GrandQuestResourceCatalogAssetBundle___LoadSystemAsset_b__15_0(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4AFCE58 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, f);
    sub_1BC3008(&Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0__LoadSystemAsset_b__2__, v5);
    sub_1BC3008(&GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_7081/*"GrandReleaseQuest"*/, v7);
    byte_4AFCE58 = 1;
  }
  v8 = (Il2CppObject *)sub_1BC3254(GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  v8[1].monitor = this;
  sub_1BC2FAC(&v8[1].monitor);
  v8[1].klass = (Il2CppClass *)f;
  sub_1BC2FAC(&v8[1]);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    v8,
    Method_GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0__LoadSystemAsset_b__2__,
    0LL);
  GrandQuestResourceCatalogAssetBundle__LoadAssetStorage(this, (System_String_o *)StringLiteral_7081/*"GrandReleaseQuest"*/, v11, v12);
}


void __fastcall GrandQuestResourceCatalogAssetBundle___LoadSystemAsset_b__15_1(
        GrandQuestResourceCatalogAssetBundle_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1BC3264(0LL, f);
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0LL);
}


GrandQuestResourceContents_o *__fastcall GrandQuestResourceCatalogAssetBundle__get_Contents(
        GrandQuestResourceCatalogAssetBundle_o *this,
        const MethodInfo *method)
{
  return this->fields._Contents_k__BackingField;
}


void __fastcall GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0___ctor(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0___LoadSystemAsset_b__2(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass15_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  struct GrandQuestResourceCatalogAssetBundle_o *_4__this; // x0
  struct System_Action_o *f; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.effectAssetData = asset,
        _4__this = (struct GrandQuestResourceCatalogAssetBundle_o *)sub_1BC2FAC(&_4__this->fields.effectAssetData),
        (f = this->fields.f) == 0LL) )
  {
    sub_1BC3264(_4__this, asset);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))f->fields.m_target)(
    f->fields.original_method_info,
    *(_QWORD *)&f->fields.extra_arg);
}


void __fastcall GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0___ctor(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0___ReloadBoardUIAtlas_b__0(
        GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestResourceCatalogAssetBundle_o *_4__this; // x8
  GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (GrandQuestResourceCatalogAssetBundle___c__DisplayClass16_0_o *)_4__this->fields._Contents_k__BackingField) == 0LL) )
  {
    sub_1BC3264(this, method);
  }
  this->fields.__4__this = (struct GrandQuestResourceCatalogAssetBundle_o *)_4__this->fields.boardUiAtlasManagerUnit;
  sub_1BC2FAC(&this->fields);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}