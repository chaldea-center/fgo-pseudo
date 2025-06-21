void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B18B21 & 1) == 0 )
  {
    sub_1BCAFF8(&SummonRootComponent_TypeInfo, v1);
    byte_4B18B21 = 1;
  }
  SummonRootComponent_TypeInfo->static_fields->FIGURE_ID = 800100;
}


void __fastcall SummonRootComponent___ctor(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonRootComponent__ActivateExternalPurchase(
        SummonRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B18B13 & 1) == 0 )
  {
    sub_1BCAFF8(&SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo, method);
    byte_4B18B13 = 1;
  }
  v3 = sub_1BCB244(SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SummonRootComponent__ClearAssetsInScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonEffPrefab; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4B18B1C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18B1C = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v4, 0LL);
  }
}


void __fastcall SummonRootComponent__EndLoadAssetData(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p_assetLoadCallback; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *assetLoadCallback; // t1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4B18B1A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_4B18B1A = 1;
  }
  this->fields.summonAssets = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  SummonRootComponent__LoadAssetsToScene(this, v6);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (CGThumbnailListItem_o *)&this->fields.assetLoadCallback;
  v10 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0LL;
    sub_1BCAF9C(p_assetLoadCallback, 0, v7, v8);
    ActionExtensions__Call(v10, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v13);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Object_object__50315216; // x20
  Il2CppObject *v9; // x0
  SummonRootComponent_o **p_bgGo; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  SummonRootComponent_o *v13; // x21
  SummonRootComponent_o *v14; // x21
  SummonRootComponent_o *v15; // x20

  v4 = this;
  if ( (byte_4B18B17 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, data);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    this = (SummonRootComponent_o *)sub_1BCAFF8(&StringLiteral_16996/*"bg"*/, v7);
    byte_4B18B17 = 1;
  }
  if ( !data )
    goto LABEL_18;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              data,
                              (System_String_o *)StringLiteral_16996/*"bg"*/,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         Object_object__50315216,
         (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v9;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.bgGo, (int32_t)v9, v11, v12);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v4->fields.bgRoot )
    goto LABEL_18;
  v13 = this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0LL);
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v13, (UnityEngine_Transform_o *)this, 0LL);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v14 = this;
  if ( !byte_4B16191 )
  {
    this = (SummonRootComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B16191 = 1;
  }
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v15 = this;
  if ( !byte_4B16196 )
  {
    this = (SummonRootComponent_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, data);
    byte_4B16196 = 1;
  }
  if ( !v15 )
LABEL_18:
    sub_1BCB254(this, data);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v15,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  SceneJumpInfo_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B18B20 & 1) == 0 )
  {
    sub_1BCAFF8(&SceneJumpInfo_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_1BCAFF8(&StringLiteral_12573/*"SellServant"*/, v3);
    byte_4B18B20 = 1;
  }
  v4 = (SceneJumpInfo_o *)sub_1BCB244(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_40654628(v4, (System_String_o *)StringLiteral_12573/*"SellServant"*/, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
}


void __fastcall SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *summonAssets; // x0
  Il2CppObject *Object_object__50315216; // x20
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  struct SummonControl_o *summonCtr; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_4B18B1B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v3);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_13060/*"SummonRoot"*/, v6);
    sub_1BCAFF8(&StringLiteral_12804/*"SmmonEffPref"*/, v7);
    sub_1BCAFF8(&StringLiteral_13055/*"SummonEffect2Prefab"*/, v8);
    byte_4B18B1B = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_27;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              (AssetData_o *)summonAssets,
                              (System_String_o *)StringLiteral_13055/*"SummonEffect2Prefab"*/,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          Object_object__50315216,
          (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = (struct UnityEngine_GameObject_o *)v11;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.summonEffPrefab, (int32_t)v11, v13, v14);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_27;
  v15 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v15 )
    goto LABEL_27;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)summonAssets, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v16 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4B16191 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16191 = 1;
  }
  if ( !v16 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v17 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4B16196 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16196 = 1;
  }
  if ( !v17 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !summonCtr )
    goto LABEL_27;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_1BCAF9C((CGThumbnailListItem_o *)&summonCtr->fields.summonInstance, (int32_t)summonAssets, v19, v20);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_12804/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     summonAssets,
                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13060/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_27:
    sub_1BCB254(summonAssets, method);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, summonAssets, 0LL);
}


void __fastcall SummonRootComponent__SetAssetStroageData(
        SummonRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetData_o *summonAssets; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_4B18B19 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, callback);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SummonRootComponent_EndLoadAssetData__, v7);
    sub_1BCAFF8(&StringLiteral_5843/*"Effect/Summon"*/, v8);
    byte_4B18B19 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v11);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetLoadCallback, (int32_t)callback, v12, v13);
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5843/*"Effect/Summon"*/, v14, 1, 0LL);
  }
}


void __fastcall SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x21

  if ( (byte_4B18B16 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BCAFF8(&Method_SummonRootComponent_EndLoadBg__, v6);
    sub_1BCAFF8(&StringLiteral_3127/*"Bg/10500"*/, v7);
    byte_4B18B16 = 1;
  }
  v8 = StringLiteral_3127/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_3127/*"Bg/10500"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.path, v8, v2, v3);
  path = this->fields.path;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v10, 1, 0LL);
}


void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_1BCB254(0LL, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4B18B15 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SummonControl___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    byte_4B18B15 = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.summonCtr;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
  }
  if ( !gameObject
    || (SummonControl__quit((SummonControl_o *)gameObject, 0LL),
        SummonRootComponent__destroyBgInfo(this, v8),
        SummonRootComponent__destroyAssetData(this, v9),
        (gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_12:
    sub_1BCB254(gameObject, v6);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_IEnumerator_o *v4; // x1

  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  v4 = SummonRootComponent__ActivateExternalPurchase(this, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_40656880((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4B18B14 & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    sub_1BCAFF8(&SoundManager_TypeInfo, v3);
    byte_4B18B14 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  SummonRootComponent__SetBg(this, v5);
}


void __fastcall SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CGThumbnailListItem_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantMaster_o *v11; // x21
  UserServantEntity_o *HeroineData; // x0
  SummonRootComponent_c *v13; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v15; // x22
  int32_t FIGURE_ID; // w21
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w0
  UIStandFigureR_o *RenderPrefab_39933080; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B18B1E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&SummonRootComponent_TypeInfo, v6);
    byte_4B18B1E = 1;
  }
  p_standFigure = (CGThumbnailListItem_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(standFigure, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v11 = (UserServantMaster_o *)Instance;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    if ( !v11 )
LABEL_19:
      sub_1BCB254(Instance, v10);
    HeroineData = UserServantMaster__getHeroineData(v11, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0LL);
    v13 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    v15 = HeroineData;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
      v13 = SummonRootComponent_TypeInfo;
    }
    FIGURE_ID = v13->static_fields->FIGURE_ID;
    if ( v15 )
    {
      v18 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v18;
      *(_QWORD *)&v23.fields.fakeValue = v17;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v23, 0LL);
      RenderPrefab_39933080 = StandFigureManager__CreateRenderPrefab_39933080(
                                svtBase,
                                FIGURE_ID,
                                v19,
                                v15->fields.lv,
                                1,
                                0,
                                1,
                                0LL,
                                0LL);
    }
    else
    {
      RenderPrefab_39933080 = StandFigureManager__CreateRenderPrefab_39863448(
                                svtBase,
                                FIGURE_ID,
                                0,
                                1,
                                0,
                                1,
                                0LL,
                                0,
                                -1,
                                0LL,
                                0LL);
    }
    p_standFigure->klass = (CGThumbnailListItem_c *)RenderPrefab_39933080;
    sub_1BCAF9C(p_standFigure, (int32_t)RenderPrefab_39933080, v21, v22);
  }
}


void __fastcall SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  AssetData_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4B18B1D & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    byte_4B18B1D = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    v4 = this->fields.summonAssets;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39722652(v4, 0LL);
    this->fields.summonAssets = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.summonAssets, 0, v5, v6);
    SummonRootComponent__ClearAssetsInScene(this, v7);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *path; // x20
  CGThumbnailListItem_o *p_bgGo; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B18B18 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18B18 = 1;
  }
  path = this->fields.path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (CGThumbnailListItem_o *)&this->fields.bgGo;
  v6 = (UnityEngine_Object_o *)bgGo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_1BCAF9C(p_bgGo, 0, v9, v10);
  }
}


void __fastcall SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIStandFigureR_o *standFigure; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B18B1F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18B1F = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v4 = (UnityEngine_Object_o *)standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_standFigure )
      sub_1BCB254(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_standFigure, 0, v8, v9);
  }
}


void __fastcall SummonRootComponent__ActivateExternalPurchase_d__12___ctor(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonRootComponent__ActivateExternalPurchase_d__12__MoveNext(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  PurchaseBehaviour_c *v9; // x0
  SummonRootComponent___c_c *v10; // x0
  System_Func_bool__o *_9__12_0; // x20
  Il2CppObject *v12; // x21
  struct SummonRootComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_WaitUntil_o *v16; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool result; // w0
  SceneRootComponent_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v23; // x1

  if ( (byte_4B18B24 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&PurchaseBehaviour_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BCAFF8(&Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__, v5);
    sub_1BCAFF8(&SummonRootComponent___c_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_4B18B24 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (SceneRootComponent_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v23);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, _4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v9 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v9 = PurchaseBehaviour_TypeInfo;
  }
  v9->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateExternal(0LL);
  v10 = SummonRootComponent___c_TypeInfo;
  if ( !SummonRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonRootComponent___c_TypeInfo);
    v10 = SummonRootComponent___c_TypeInfo;
  }
  _9__12_0 = v10->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SummonRootComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__12_0 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__12_0, v12, Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__, 0LL);
    static_fields = SummonRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v14, v15);
  }
  v16 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v16, _9__12_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v16, v18, v19);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_IEnumerator_Reset(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_SummonRootComponent__ActivateExternalPurchase_d__12_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_IEnumerator_get_Current(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonRootComponent__ActivateExternalPurchase_d__12__System_IDisposable_Dispose(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18B22 & 1) == 0 )
  {
    sub_1BCAFF8(&SummonRootComponent___c_TypeInfo, v1);
    byte_4B18B22 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SummonRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonRootComponent___c_TypeInfo->static_fields->__9 = (struct SummonRootComponent___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SummonRootComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SummonRootComponent___c___ctor(SummonRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonRootComponent___c___ActivateExternalPurchase_b__12_0(
        SummonRootComponent___c_o *this,
        const MethodInfo *method)
{
  PurchaseLogicExternal_c *v2; // x0

  if ( (byte_4B18B23 & 1) == 0 )
  {
    sub_1BCAFF8(&PurchaseLogicExternal_TypeInfo, method);
    byte_4B18B23 = 1;
  }
  v2 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v2 = PurchaseLogicExternal_TypeInfo;
  }
  return v2->static_fields->isEnd;
}