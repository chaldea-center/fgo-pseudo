void SummonRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C53363 & 1) == 0 )
  {
    sub_1C3E564(&SummonRootComponent_TypeInfo);
    byte_4C53363 = 1;
  }
  SummonRootComponent_TypeInfo->static_fields->FIGURE_ID = 800100;
}


void SummonRootComponent___ctor(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


System_Collections_IEnumerator_o *SummonRootComponent__ActivateExternalPurchase(
        SummonRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C53354 & 1) == 0 )
  {
    sub_1C3E564(&SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo);
    byte_4C53354 = 1;
  }
  v3 = sub_1C3E7B0(SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void SummonRootComponent__ClearAssetsInScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonEffPrefab; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C5335D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5335D = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v4, 0);
  }
}


void SummonRootComponent__EndLoadAssetData(SummonRootComponent_o *this, AssetData_o *data, const MethodInfo *method)
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

  if ( (byte_4C5335B & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5335B = 1;
  }
  this->fields.summonAssets = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  SummonRootComponent__LoadAssetsToScene(this, v6);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (CGThumbnailListItem_o *)&this->fields.assetLoadCallback;
  v10 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0;
    sub_1C3E508(p_assetLoadCallback, 0, v7, v8);
    ActionExtensions__Call(v10, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v13);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
}


void SummonRootComponent__EndLoadBg(SummonRootComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  Il2CppObject *Object_object__51228128; // x20
  Il2CppObject *v6; // x0
  SummonRootComponent_o **p_bgGo; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SummonRootComponent_o *v10; // x21
  SummonRootComponent_o *v11; // x21
  SummonRootComponent_o *v12; // x20

  v4 = this;
  if ( (byte_4C53358 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (SummonRootComponent_o *)sub_1C3E564(&StringLiteral_17152/*"bg"*/);
    byte_4C53358 = 1;
  }
  if ( !data )
    goto LABEL_18;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              data,
                              (System_String_o *)StringLiteral_17152/*"bg"*/,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         Object_object__51228128,
         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v6;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.bgGo, (int32_t)v6, v8, v9);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v4->fields.bgRoot )
    goto LABEL_18;
  v10 = this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0);
  if ( !v10 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v11 = this;
  if ( !byte_4C506A1 )
  {
    this = (SummonRootComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v11 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v12 = this;
  if ( !byte_4C506A6 )
  {
    this = (SummonRootComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v12 )
LABEL_18:
    sub_1C3E7C0(this, data);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0);
}


SummonControl_o *SummonRootComponent__GetSummonControl(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonCtr; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4C53362 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53362 = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0, 0) )
    return this->fields.summonCtr;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v6);
  return (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              gameObject,
                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
}


void SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C53361 & 1) == 0 )
  {
    sub_1C3E564(&SceneJumpInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&StringLiteral_12695/*"SellServant"*/);
    byte_4C53361 = 1;
  }
  v2 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_41527648(v2, (System_String_o *)StringLiteral_12695/*"SellServant"*/, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v2, 0);
}


void SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonAssets; // x0
  Il2CppObject *Object_object__51228128; // x20
  Il2CppObject *v5; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  struct SummonControl_o *summonCtr; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_4C5335C & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_13184/*"SummonRoot"*/);
    sub_1C3E564(&StringLiteral_12925/*"SmmonEffPref"*/);
    sub_1C3E564(&StringLiteral_13179/*"SummonEffect2Prefab"*/);
    byte_4C5335C = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_27;
  Object_object__51228128 = AssetData__GetObject_object__51228128(
                              (AssetData_o *)summonAssets,
                              (System_String_o *)StringLiteral_13179/*"SummonEffect2Prefab"*/,
                              (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__Instantiate_object_(
         Object_object__51228128,
         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = (struct UnityEngine_GameObject_o *)v5;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.summonEffPrefab, (int32_t)v5, v7, v8);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  if ( !this->fields.Effroot )
    goto LABEL_27;
  v9 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0);
  if ( !v9 )
    goto LABEL_27;
  UnityEngine_Transform__set_parent(v9, (UnityEngine_Transform_o *)summonAssets, 0);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  v10 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4C506A1 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v10 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  v11 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4C506A6 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v11 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  if ( !summonCtr )
    goto LABEL_27;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_1C3E508((CGThumbnailListItem_o *)&summonCtr->fields.summonInstance, (int32_t)summonAssets, v13, v14);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_12925/*"SmmonEffPref"*/,
                                                     0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0),
        (summonAssets = *p_summonEffPrefab) == 0)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     summonAssets,
                                                     (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0)) == 0
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13184/*"SummonRoot"*/,
                          0),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        !FsmGameObject) )
  {
LABEL_27:
    sub_1C3E7C0(summonAssets, method);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, summonAssets, 0);
}


void SummonRootComponent__SetAssetStroageData(
        SummonRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  AssetLoader_LoadEndDataHandler_o *v10; // x20

  if ( (byte_4C5335A & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonRootComponent_EndLoadAssetData__);
    sub_1C3E564(&StringLiteral_5893/*"Effect/Summon"*/);
    byte_4C5335A = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v7);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    this->fields.assetLoadCallback = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetLoadCallback, (int32_t)callback, v8, v9);
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5893/*"Effect/Summon"*/, v10, 1, 0);
  }
}


void SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21

  if ( (byte_4C53357 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_SummonRootComponent_EndLoadBg__);
    sub_1C3E564(&StringLiteral_3150/*"Bg/10500"*/);
    byte_4C53357 = 1;
  }
  v5 = StringLiteral_3150/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_3150/*"Bg/10500"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.path, v5, v2, v3);
  path = this->fields.path;
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v7, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_1C3E7C0(0, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0);
}


void SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4C53356 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C53356 = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.summonCtr;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_12;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
  }
  if ( !gameObject
    || (SummonControl__quit((SummonControl_o *)gameObject, 0),
        SummonRootComponent__destroyBgInfo(this, v6),
        SummonRootComponent__destroyAssetData(this, v7),
        MainMenuBar__UnregisterSummonBalloonClickAction(0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
LABEL_12:
    sub_1C3E7C0(gameObject, v4);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0);
}


void SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_IEnumerator_o *v4; // x1

  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0);
  v4 = SummonRootComponent__ActivateExternalPurchase(this, v3);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_41529900((SceneRootComponent_o *)this, 0);
}


void SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C53355 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C53355 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  SummonRootComponent__SetBg(this, v4);
}


void SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  UserServantMaster_o *v7; // x21
  UserServantEntity_o *HeroineData; // x0
  SummonRootComponent_c *v9; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v11; // x22
  int32_t FIGURE_ID; // w21
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w0
  UIStandFigureR_o *RenderPrefab_40792680; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C5335F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SummonRootComponent_TypeInfo);
    byte_4C5335F = 1;
  }
  p_standFigure = (CGThumbnailListItem_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(standFigure, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v7 = (UserServantMaster_o *)Instance;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    if ( !v7 )
LABEL_19:
      sub_1C3E7C0(Instance, v6);
    HeroineData = UserServantMaster__getHeroineData(v7, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0);
    v9 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    v11 = HeroineData;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
      v9 = SummonRootComponent_TypeInfo;
    }
    FIGURE_ID = v9->static_fields->FIGURE_ID;
    if ( v11 )
    {
      v14 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v14;
      *(_QWORD *)&v19.fields.fakeValue = v13;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v19, 0);
      RenderPrefab_40792680 = StandFigureManager__CreateRenderPrefab_40792680(
                                svtBase,
                                FIGURE_ID,
                                v15,
                                v11->fields.lv,
                                1,
                                0,
                                1,
                                0,
                                0);
    }
    else
    {
      RenderPrefab_40792680 = StandFigureManager__CreateRenderPrefab_40722664(
                                svtBase,
                                FIGURE_ID,
                                0,
                                1,
                                0,
                                1,
                                0,
                                0,
                                -1,
                                0,
                                0);
    }
    p_standFigure->klass = (CGThumbnailListItem_c *)RenderPrefab_40792680;
    sub_1C3E508(p_standFigure, (int32_t)RenderPrefab_40792680, v17, v18);
  }
}


void SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  AssetData_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C5335E & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C5335E = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    v4 = this->fields.summonAssets;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40580972(v4, 0);
    this->fields.summonAssets = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.summonAssets, 0, v5, v6);
    SummonRootComponent__ClearAssetsInScene(this, v7);
  }
}


void SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *path; // x20
  CGThumbnailListItem_o *p_bgGo; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C53359 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53359 = 1;
  }
  path = this->fields.path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0);
  bgGo = this->fields.bgGo;
  p_bgGo = (CGThumbnailListItem_o *)&this->fields.bgGo;
  v5 = (UnityEngine_Object_o *)bgGo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(klass, 0);
    p_bgGo->klass = 0;
    sub_1C3E508(p_bgGo, 0, v8, v9);
  }
}


void SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIStandFigureR_o *standFigure; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C53360 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53360 = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v4 = (UnityEngine_Object_o *)standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_standFigure )
      sub_1C3E7C0(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
    *p_standFigure = 0;
    sub_1C3E508((CGThumbnailListItem_o *)p_standFigure, 0, v8, v9);
  }
}


void SummonRootComponent__ActivateExternalPurchase_d__12___ctor(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SummonRootComponent__ActivateExternalPurchase_d__12__MoveNext(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  PurchaseBehaviour_c *v4; // x0
  SummonRootComponent___c_c *v5; // x0
  System_Func_bool__o *_9__12_0; // x20
  Il2CppObject *v7; // x21
  struct SummonRootComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_WaitUntil_o *v11; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  SceneRootComponent_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4C53366 & 1) == 0 )
  {
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&PurchaseBehaviour_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__);
    sub_1C3E564(&SummonRootComponent___c_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C53366 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = (SceneRootComponent_o *)this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v18);
    AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, _4__this, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v4 = PurchaseBehaviour_TypeInfo;
  }
  v4->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateExternal(0);
  v5 = SummonRootComponent___c_TypeInfo;
  if ( !SummonRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonRootComponent___c_TypeInfo);
    v5 = SummonRootComponent___c_TypeInfo;
  }
  _9__12_0 = v5->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonRootComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__12_0 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__12_0, v7, Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__, 0);
    static_fields = SummonRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = _9__12_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v9, v10);
  }
  v11 = (UnityEngine_WaitUntil_o *)sub_1C3E7B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, _9__12_0, 0);
  this->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &this->fields.__2__current;
  sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)v11, v13, v14);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_IEnumerator_Reset(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_SummonRootComponent__ActivateExternalPurchase_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *SummonRootComponent__ActivateExternalPurchase_d__12__System_Collections_IEnumerator_get_Current(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SummonRootComponent__ActivateExternalPurchase_d__12__System_IDisposable_Dispose(
        SummonRootComponent__ActivateExternalPurchase_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void SummonRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C53364 & 1) == 0 )
  {
    sub_1C3E564(&SummonRootComponent___c_TypeInfo);
    byte_4C53364 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(SummonRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonRootComponent___c_TypeInfo->static_fields->__9 = (struct SummonRootComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SummonRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonRootComponent___c___ctor(SummonRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonRootComponent___c___ActivateExternalPurchase_b__12_0(
        SummonRootComponent___c_o *this,
        const MethodInfo *method)
{
  PurchaseLogicExternal_c *v2; // x0

  if ( (byte_4C53365 & 1) == 0 )
  {
    sub_1C3E564(&PurchaseLogicExternal_TypeInfo);
    byte_4C53365 = 1;
  }
  v2 = PurchaseLogicExternal_TypeInfo;
  if ( !PurchaseLogicExternal_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo);
    v2 = PurchaseLogicExternal_TypeInfo;
  }
  return v2->static_fields->isEnd;
}