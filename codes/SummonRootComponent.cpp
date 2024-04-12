void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B3EF5 & 1) == 0 )
  {
    sub_B52984(&SummonRootComponent_TypeInfo);
    byte_42B3EF5 = 1;
  }
  SummonRootComponent_TypeInfo->static_fields->FIGURE_ID = 800100;
}


void __fastcall SummonRootComponent___ctor(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__ClearAssetsInScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonEffPrefab; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_42B3EF0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3EF0 = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v4, 0LL);
  }
}


void __fastcall SummonRootComponent__EndLoadAssetData(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *p_assetLoadCallback; // x19
  System_Action_o *v18; // x20
  struct System_Action_o *assetLoadCallback; // t1
  CommonUI_o *Instance; // x0
  __int64 v21; // x1

  if ( (byte_42B3EEE & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3EEE = 1;
  }
  this->fields.summonAssets = data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.summonAssets,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonRootComponent__LoadAssetsToScene(this, v10);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (BattleServantConfConponent_o *)&this->fields.assetLoadCallback;
  v18 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0LL;
    sub_B52920(p_assetLoadCallback, 0LL, v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v18, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v21);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v6; // x0
  SummonRootComponent_o **p_bgGo; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Transform_o *v14; // x21
  UnityEngine_Transform_o *transform; // x21
  int v16; // s0
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0

  v4 = this;
  if ( (byte_42B3EEB & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (SummonRootComponent_o *)sub_B52984(&StringLiteral_16810/*"bg"*/);
    byte_42B3EEB = 1;
  }
  if ( !data )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16810/*"bg"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v6;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.bgGo, v6, v8, v9, v10, v11, v12, v13);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_15;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v4->fields.bgRoot )
    goto LABEL_15;
  v14 = (UnityEngine_Transform_o *)this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)this, 0LL);
  this = *p_bgGo;
  if ( !*p_bgGo
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL), (this = *p_bgGo) == 0LL)
    || (v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19) )
  {
LABEL_15:
    sub_B52A5C(this, data);
  }
  UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *v2; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B3EF4 & 1) == 0 )
  {
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&StringLiteral_12759/*"SellServant"*/);
    byte_42B3EF4 = 1;
  }
  v2 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17466224(v2, (System_String_o *)StringLiteral_12759/*"SellServant"*/, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonAssets; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  struct SummonControl_o *summonCtr; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_42B3EEF & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13259/*"SummonRoot"*/);
    sub_B52984(&StringLiteral_13007/*"SmmonEffPref"*/);
    sub_B52984(&StringLiteral_13254/*"SummonEffect2Prefab"*/);
    byte_42B3EEF = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_24;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)summonAssets,
                                                                               (System_String_o *)StringLiteral_13254/*"SummonEffect2Prefab"*/,
                                                                               (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            Object_WarBoardWaitTimeSetting,
                                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = v5;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.summonEffPrefab,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_24;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_24;
  v13 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v13 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)summonAssets, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  transform = UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  v18 = UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
  if ( !v18 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_24;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !summonCtr )
    goto LABEL_24;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_B52920(
    (BattleServantConfConponent_o *)&summonCtr->fields.summonInstance,
    (System_Int32_array **)summonAssets,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_24;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_13007/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     summonAssets,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13259/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_24:
    sub_B52A5C(summonAssets, method);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, summonAssets, 0LL);
}


void __fastcall SummonRootComponent__SetAssetStroageData(
        SummonRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_42B3EED & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SummonRootComponent_EndLoadAssetData__);
    sub_B52984(&StringLiteral_5893/*"Effect/Summon"*/);
    byte_42B3EED = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v7);
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.assetLoadCallback,
      (System_Int32_array **)callback,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5893/*"Effect/Summon"*/, v14, 1, 0LL);
  }
}


void __fastcall SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21

  if ( (byte_42B3EEA & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SummonRootComponent_EndLoadBg__);
    sub_B52984(&StringLiteral_2835/*"Bg/10500"*/);
    byte_42B3EEA = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_2835/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_2835/*"Bg/10500"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.path, v9, v2, v3, v4, v5, v6, v7);
  path = this->fields.path;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v11, 1, 0LL);
}


void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_B52A5C(0LL, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42B3EE9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42B3EE9 = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.summonCtr;
    if ( !gameObject )
      goto LABEL_16;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               gameObject,
                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    if ( !gameObject )
      goto LABEL_16;
  }
  SummonControl__quit((SummonControl_o *)gameObject, 0LL);
  SummonRootComponent__destroyBgInfo(this, v6);
  SummonRootComponent__destroyAssetData(this, v7);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !gameObject )
LABEL_16:
    sub_B52A5C(gameObject, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B3EE7 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42B3EE7 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17470456((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  const MethodInfo *v4; // x1

  if ( (byte_42B3EE8 & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3EE8 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  SummonRootComponent__SetBg(this, v4);
}


void __fastcall SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserServantMaster_o *v7; // x21
  UserServantEntity_o *HeroineData; // x0
  SummonRootComponent_c *v9; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v11; // x21
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t FIGURE_ID; // w22
  int32_t v15; // w0
  System_Int32_array **RenderPrefab_26219892; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42B3EF2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SummonRootComponent_TypeInfo);
    byte_42B3EF2 = 1;
  }
  p_standFigure = (BattleServantConfConponent_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(standFigure, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v7 = (UserServantMaster_o *)Instance;
    if ( (BYTE3(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    }
    if ( !v7 )
LABEL_26:
      sub_B52A5C(Instance, v6);
    HeroineData = UserServantMaster__getHeroineData(v7, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0LL);
    v9 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    if ( HeroineData )
    {
      v11 = HeroineData;
      if ( (WORD1(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SummonRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
        v9 = SummonRootComponent_TypeInfo;
      }
      v13 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
      v12 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
      FIGURE_ID = v9->static_fields->FIGURE_ID;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = v13;
      *(_QWORD *)&v23.fields.fakeValue = v12;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v23, 0LL);
      RenderPrefab_26219892 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_26219892(
                                                       svtBase,
                                                       FIGURE_ID,
                                                       v15,
                                                       v11->fields.lv,
                                                       1,
                                                       0,
                                                       1,
                                                       0LL,
                                                       0LL);
    }
    else
    {
      if ( (WORD1(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SummonRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
        v9 = SummonRootComponent_TypeInfo;
      }
      RenderPrefab_26219892 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_26220588(
                                                       svtBase,
                                                       v9->static_fields->FIGURE_ID,
                                                       0,
                                                       1,
                                                       0,
                                                       1,
                                                       0LL,
                                                       0,
                                                       -1,
                                                       0LL);
    }
    p_standFigure->klass = (BattleServantConfConponent_c *)RenderPrefab_26219892;
    sub_B52920(p_standFigure, RenderPrefab_26219892, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  AssetData_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_42B3EF1 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B3EF1 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    v4 = this->fields.summonAssets;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30359936(v4, 0LL);
    this->fields.summonAssets = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.summonAssets, 0LL, v5, v6, v7, v8, v9, v10);
    SummonRootComponent__ClearAssetsInScene(this, v11);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *path; // x20
  BattleServantConfConponent_o *p_bgGo; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B3EEC & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3EEC = 1;
  }
  path = this->fields.path;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (BattleServantConfConponent_o *)&this->fields.bgGo;
  v5 = (UnityEngine_Object_o *)bgGo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_B52920(p_bgGo, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIStandFigureR_o *standFigure; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B3EF3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3EF3 = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v4 = (UnityEngine_Object_o *)standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_standFigure )
      sub_B52A5C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_standFigure, 0LL, v8, v9, v10, v11, v12, v13);
  }
}