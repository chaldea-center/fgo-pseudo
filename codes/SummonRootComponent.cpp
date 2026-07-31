void SummonRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5934AAE & 1) == 0 )
  {
    sub_21FFC50(&SummonRootComponent_TypeInfo);
    byte_5934AAE = 1;
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934A9F & 1) == 0 )
  {
    sub_21FFC50(&SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo);
    byte_5934A9F = 1;
  }
  v3 = sub_21FFEBC(SummonRootComponent__ActivateExternalPurchase_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void SummonRootComponent__ClearAssetsInScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *summonEffPrefab; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x19

  if ( (byte_5934AA8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934AA8 = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83246496(v7, 0);
  }
}


void SummonRootComponent__EndLoadAssetData(SummonRootComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_o *p_assetLoadCallback; // x19
  System_Action_o *v18; // x20
  struct System_Action_o *assetLoadCallback; // t1
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_5934AA6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934AA6 = 1;
  }
  this->fields.summonAssets = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.summonAssets,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonRootComponent__LoadAssetsToScene(this, v10);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.assetLoadCallback;
  v18 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0;
    sub_21FFBF4(p_assetLoadCallback, 0, v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v18, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v21);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
}


void SummonRootComponent__EndLoadBg(SummonRootComponent_o *this, AssetData_o *data, const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Object_object__58323140; // x20
  Il2CppObject *v8; // x0
  SummonRootComponent_o **p_bgGo; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  SummonRootComponent_o *v16; // x21
  SummonRootComponent_o *v17; // x21
  SummonRootComponent_o *v18; // x20

  v4 = this;
  if ( (byte_5934AA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (SummonRootComponent_o *)sub_21FFC50(&StringLiteral_17833/*"bg"*/);
    byte_5934AA3 = 1;
  }
  if ( !data )
    goto LABEL_18;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              data,
                              (System_String_o *)StringLiteral_17833/*"bg"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__Instantiate_object_(
         Object_object__58323140,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v8;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.bgGo, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v4->fields.bgRoot )
    goto LABEL_18;
  v16 = this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0);
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v16, (UnityEngine_Transform_o *)this, 0);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v17 = this;
  if ( !byte_5931940 )
  {
    this = (SummonRootComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v17 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v18 = this;
  if ( !byte_5931945 )
  {
    this = (SummonRootComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v18 )
LABEL_18:
    sub_21FFECC(this, data);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v18,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0);
}


SummonControl_o *SummonRootComponent__GetSummonControl(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *summonCtr; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_5934AAD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934AAD = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0, 0) )
    return this->fields.summonCtr;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v7);
  return (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              gameObject,
                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
}


void SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5934AAC & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    byte_5934AAC = 1;
  }
  v2 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_48427172(v2, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v2, 0);
}


void SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonAssets; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Object_object__58323140; // x20
  Il2CppObject *v7; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  struct SummonControl_o *summonCtr; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_5934AA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13700/*"SummonRoot"*/);
    sub_21FFC50(&StringLiteral_13437/*"SmmonEffPref"*/);
    sub_21FFC50(&StringLiteral_13695/*"SummonEffect2Prefab"*/);
    byte_5934AA7 = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_27;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              (AssetData_o *)summonAssets,
                              (System_String_o *)StringLiteral_13695/*"SummonEffect2Prefab"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__58323140,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = (struct UnityEngine_GameObject_o *)v7;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.summonEffPrefab,
    (int32_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  if ( !this->fields.Effroot )
    goto LABEL_27;
  v15 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0);
  if ( !v15 )
    goto LABEL_27;
  UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)summonAssets, 0);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  v16 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_5931940 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v16 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  v17 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_5931945 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v17 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0);
  if ( !summonCtr )
    goto LABEL_27;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&summonCtr->fields.summonInstance,
    (int32_t)summonAssets,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_13437/*"SmmonEffPref"*/,
                                                     0)) == 0
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0),
        (summonAssets = *p_summonEffPrefab) == 0)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     summonAssets,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0)) == 0
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13700/*"SummonRoot"*/,
                          0),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        !FsmGameObject) )
  {
LABEL_27:
    sub_21FFECC(summonAssets, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  AssetLoader_LoadEndDataHandler_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_5934AA5 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SummonRootComponent_EndLoadAssetData__);
    sub_21FFC50(&StringLiteral_6131/*"Effect/Summon"*/);
    byte_5934AA5 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    ActionExtensions__Call(callback, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v7);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    this->fields.assetLoadCallback = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetLoadCallback,
      (int32_t)callback,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15, v16);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6131/*"Effect/Summon"*/, v14, 1, 0, 0);
  }
}


void SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_5934AA2 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SummonRootComponent_EndLoadBg__);
    sub_21FFC50(&StringLiteral_3271/*"Bg/10500"*/);
    byte_5934AA2 = 1;
  }
  v9 = StringLiteral_3271/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_3271/*"Bg/10500"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.path, v9, v2, v3, v4, v5, v6, v7);
  path = this->fields.path;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12, v13);
  AssetManager__loadAssetStorage(path, v11, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_21FFECC(0, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0);
}


void SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_5934AA1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5934AA1 = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
  }
  if ( !gameObject
    || (SummonControl__quit((SummonControl_o *)gameObject, 0),
        SummonRootComponent__destroyBgInfo(this, v7),
        SummonRootComponent__destroyAssetData(this, v8),
        MainMenuBar__UnregisterSummonBalloonClickAction(0),
        (gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
LABEL_12:
    sub_21FFECC(gameObject, v5);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_48429424((SceneRootComponent_o *)this, 0);
}


void SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *MainBgmName; // x20
  const MethodInfo *v7; // x1

  if ( (byte_5934AA0 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5934AA0 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
  SoundManager__playBgm(MainBgmName, 0);
  SummonRootComponent__SetBg(this, v7);
}


void SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UserServantMaster_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  UserServantEntity_o *HeroineData; // x21
  SummonRootComponent_c *v13; // x0
  UnityEngine_GameObject_o *svtBase; // x20
  int v15; // w8
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t FIGURE_ID; // w22
  int32_t v19; // w0
  UIStandFigureR_o *RenderPrefab_47680560; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_5934AAA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SummonRootComponent_TypeInfo);
    byte_5934AAA = 1;
  }
  p_standFigure = (MissionNaviTransitionBoardItem_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(standFigure, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v9 = (UserServantMaster_o *)Instance;
    if ( !*(&SummonRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo, v7, v8);
    if ( !v9 )
LABEL_21:
      sub_21FFECC(Instance, v7);
    HeroineData = UserServantMaster__getHeroineData(v9, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0);
    v13 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    v15 = *(&SummonRootComponent_TypeInfo->_2.cctor_finished + 1);
    if ( HeroineData )
    {
      if ( !v15 )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo, v10, v11);
        v13 = SummonRootComponent_TypeInfo;
      }
      v16 = *(_QWORD *)&HeroineData->fields.limitCount.fields.currentCryptoKey;
      v17 = *(_QWORD *)&HeroineData->fields.limitCount.fields.fakeValue;
      FIGURE_ID = v13->static_fields->FIGURE_ID;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
      *(_QWORD *)&v27.fields.currentCryptoKey = v16;
      *(_QWORD *)&v27.fields.fakeValue = v17;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v27, 0);
      RenderPrefab_47680560 = StandFigureManager__CreateRenderPrefab_47680560(
                                svtBase,
                                FIGURE_ID,
                                v19,
                                HeroineData->fields.lv,
                                1,
                                0,
                                1,
                                0,
                                0);
    }
    else
    {
      if ( !v15 )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo, v10, v11);
        v13 = SummonRootComponent_TypeInfo;
      }
      RenderPrefab_47680560 = StandFigureManager__CreateRenderPrefab_47607168(
                                svtBase,
                                v13->static_fields->FIGURE_ID,
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
    p_standFigure->klass = (MissionNaviTransitionBoardItem_c *)RenderPrefab_47680560;
    sub_21FFBF4(p_standFigure, (int32_t)RenderPrefab_47680560, v21, v22, v23, v24, v25, v26);
  }
}


void SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AssetData_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_5934AA9 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5934AA9 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0) )
  {
    v6 = this->fields.summonAssets;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
    AssetManager__releaseAsset_47465556(v6, 0);
    this->fields.summonAssets = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.summonAssets, 0, v7, v8, v9, v10, v11, v12);
    SummonRootComponent__ClearAssetsInScene(this, v13);
  }
}


void SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *path; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  MissionNaviTransitionBoardItem_o *p_bgGo; // x19
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5934AA4 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934AA4 = 1;
  }
  path = this->fields.path;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__releaseAssetStorage(path, 0);
  bgGo = this->fields.bgGo;
  p_bgGo = (MissionNaviTransitionBoardItem_o *)&this->fields.bgGo;
  v8 = (UnityEngine_Object_o *)bgGo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(klass, 0);
    p_bgGo->klass = 0;
    sub_21FFBF4(p_bgGo, 0, v13, v14, v15, v16, v17, v18);
  }
}


void SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v5; // x20
  struct UIStandFigureR_o *standFigure; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5934AAB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934AAB = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v5 = (UnityEngine_Object_o *)standFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_standFigure )
      sub_21FFECC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_standFigure = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_standFigure, 0, v11, v12, v13, v14, v15, v16);
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
  __int64 v2; // x2
  int32_t _1__state; // w22
  SceneRootComponent_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  PurchaseBehaviour_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  SummonRootComponent___c_c *v11; // x0
  struct SummonRootComponent___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct SummonRootComponent___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_WaitUntil_o *v22; // x21
  Il2CppObject **p__2__current; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_5934AB1 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&PurchaseBehaviour_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__);
    sub_21FFC50(&SummonRootComponent___c_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_5934AB1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = (SceneRootComponent_o *)this->fields.__4__this;
      this->fields.__1__state = -1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v7);
      AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, _4__this, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v8 = PurchaseBehaviour_TypeInfo;
    if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method, v2);
      v8 = PurchaseBehaviour_TypeInfo;
    }
    v8->static_fields->isOpenPurchaseDialogEvent = 1;
    PurchaseBehaviour__ActivateExternal(0);
    v11 = SummonRootComponent___c_TypeInfo;
    if ( !*(&SummonRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent___c_TypeInfo, v9, v10);
      v11 = SummonRootComponent___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__12_0 = static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v9, v10);
        static_fields = SummonRootComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__12_0, v14, Method_SummonRootComponent___c__ActivateExternalPurchase_b__12_0__, 0);
      v15 = SummonRootComponent___c_TypeInfo->static_fields;
      v15->__9__12_0 = _9__12_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__12_0, (int32_t)_9__12_0, v16, v17, v18, v19, v20, v21);
    }
    v22 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v22, _9__12_0, 0);
    this->fields.__2__current = (Il2CppObject *)v22;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v22, v24, v25, v26, v27, v28, v29);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SummonRootComponent__ActivateExternalPurchase_d__12_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934AAF & 1) == 0 )
  {
    sub_21FFC50(&SummonRootComponent___c_TypeInfo);
    byte_5934AAF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SummonRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonRootComponent___c_TypeInfo->static_fields->__9 = (struct SummonRootComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SummonRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonRootComponent___c___ctor(SummonRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonRootComponent___c___ActivateExternalPurchase_b__12_0(
        SummonRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseLogicExternal_c *v3; // x0

  if ( (byte_5934AB0 & 1) == 0 )
  {
    sub_21FFC50(&PurchaseLogicExternal_TypeInfo);
    byte_5934AB0 = 1;
  }
  v3 = PurchaseLogicExternal_TypeInfo;
  if ( !*(&PurchaseLogicExternal_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseLogicExternal_TypeInfo, method, v2);
    v3 = PurchaseLogicExternal_TypeInfo;
  }
  return v3->static_fields->isEnd;
}