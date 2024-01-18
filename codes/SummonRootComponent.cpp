void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AE4E & 1) == 0 )
  {
    sub_B2C35C(&SummonRootComponent_TypeInfo, v1);
    byte_418AE4E = 1;
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

  if ( (byte_418AE49 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AE49 = 1;
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
    UnityEngine_Object__Destroy_35314896(v4, 0LL);
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

  if ( (byte_418AE47 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_418AE47 = 1;
  }
  this->fields.summonAssets = data;
  sub_B2C2F8(
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
    sub_B2C2F8(p_assetLoadCallback, 0LL, v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v18, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v21);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v9; // x0
  SummonRootComponent_o **p_bgGo; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *v17; // x21
  UnityEngine_Transform_o *transform; // x21
  int v19; // s0
  UnityEngine_Transform_o *v22; // x20
  int v23; // s0

  v4 = this;
  if ( (byte_418AE44 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (SummonRootComponent_o *)sub_B2C35C(&StringLiteral_16695/*"bg"*/, v7);
    byte_418AE44 = 1;
  }
  if ( !data )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16695/*"bg"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v9;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.bgGo, v9, v11, v12, v13, v14, v15, v16);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_15;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v4->fields.bgRoot )
    goto LABEL_15;
  v17 = (UnityEngine_Transform_o *)this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0LL);
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)this, 0LL);
  this = *p_bgGo;
  if ( !*p_bgGo
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL), (this = *p_bgGo) == 0LL)
    || (v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_one(0LL),
        !v22) )
  {
LABEL_15:
    sub_B2C434(this, data);
  }
  UnityEngine_Transform__set_localScale(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  SceneJumpInfo_o *v4; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418AE4D & 1) == 0 )
  {
    sub_B2C35C(&SceneJumpInfo_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v3);
    byte_418AE4D = 1;
  }
  v4 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17292968(v4, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *summonAssets; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *transform; // x21
  int v21; // s0
  UnityEngine_Transform_o *v24; // x21
  int v25; // s0
  struct SummonControl_o *summonCtr; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_418AE48 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_13162/*"SummonRoot"*/, v6);
    sub_B2C35C(&StringLiteral_12910/*"SmmonEffPref"*/, v7);
    sub_B2C35C(&StringLiteral_13157/*"SummonEffect2Prefab"*/, v8);
    byte_418AE48 = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_24;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)summonAssets,
                                                                               (System_String_o *)StringLiteral_13157/*"SummonEffect2Prefab"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             Object_WarBoardWaitTimeSetting,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = v11;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.summonEffPrefab,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_24;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_24;
  v19 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v19 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)summonAssets, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  transform = UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  v24 = UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL);
  if ( !v24 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_24;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !summonCtr )
    goto LABEL_24;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&summonCtr->fields.summonInstance,
    (System_Int32_array **)summonAssets,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_24;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_12910/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     summonAssets,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13162/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_24:
    sub_B2C434(summonAssets, method);
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
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AssetLoader_LoadEndDataHandler_o *v18; // x20

  if ( (byte_418AE46 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, callback);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SummonRootComponent_EndLoadAssetData__, v7);
    sub_B2C35C(&StringLiteral_5850/*"Effect/Summon"*/, v8);
    byte_418AE46 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v11);
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.assetLoadCallback,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5850/*"Effect/Summon"*/, v18, 1, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_418AE43 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&Method_SummonRootComponent_EndLoadBg__, v10);
    sub_B2C35C(&StringLiteral_2804/*"Bg/10500"*/, v11);
    byte_418AE43 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_2804/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_2804/*"Bg/10500"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.path, v12, v2, v3, v4, v5, v6, v7);
  path = this->fields.path;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v14, 1, 0LL);
}


void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_B2C434(0LL, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_418AE42 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SummonControl___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    byte_418AE42 = 1;
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
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    if ( !gameObject )
      goto LABEL_16;
  }
  SummonControl__quit((SummonControl_o *)gameObject, 0LL);
  SummonRootComponent__destroyBgInfo(this, v9);
  SummonRootComponent__destroyAssetData(this, v10);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !gameObject )
LABEL_16:
    sub_B2C434(gameObject, v7);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418AE40 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418AE40 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17297200((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v5; // x1

  if ( (byte_418AE41 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418AE41 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
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
  BattleServantConfConponent_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantMaster_o *v11; // x21
  UserServantEntity_o *HeroineData; // x0
  SummonRootComponent_c *v13; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v15; // x21
  __int64 v16; // x23
  __int64 v17; // x24
  int32_t FIGURE_ID; // w22
  int32_t v19; // w0
  System_Int32_array **RenderPrefab_27084580; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_418AE4B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&SummonRootComponent_TypeInfo, v6);
    byte_418AE4B = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    v11 = (UserServantMaster_o *)Instance;
    if ( (BYTE3(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    }
    if ( !v11 )
LABEL_26:
      sub_B2C434(Instance, v10);
    HeroineData = UserServantMaster__getHeroineData(v11, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0LL);
    v13 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    if ( HeroineData )
    {
      v15 = HeroineData;
      if ( (WORD1(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SummonRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
        v13 = SummonRootComponent_TypeInfo;
      }
      v17 = *(_QWORD *)&v15->fields.limitCount.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.limitCount.fields.fakeValue;
      FIGURE_ID = v13->static_fields->FIGURE_ID;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v17;
      *(_QWORD *)&v27.fields.fakeValue = v16;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
      RenderPrefab_27084580 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_27084580(
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
      if ( (WORD1(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SummonRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
        v13 = SummonRootComponent_TypeInfo;
      }
      RenderPrefab_27084580 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_27085276(
                                                       svtBase,
                                                       v13->static_fields->FIGURE_ID,
                                                       0,
                                                       1,
                                                       0,
                                                       1,
                                                       0LL,
                                                       0,
                                                       -1,
                                                       0LL);
    }
    p_standFigure->klass = (BattleServantConfConponent_c *)RenderPrefab_27084580;
    sub_B2C2F8(p_standFigure, RenderPrefab_27084580, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_418AE4A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_418AE4A = 1;
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
    AssetManager__releaseAsset_30152684(v4, 0LL);
    this->fields.summonAssets = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.summonAssets, 0LL, v5, v6, v7, v8, v9, v10);
    SummonRootComponent__ClearAssetsInScene(this, v11);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *path; // x20
  BattleServantConfConponent_o *p_bgGo; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_418AE45 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418AE45 = 1;
  }
  path = this->fields.path;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (BattleServantConfConponent_o *)&this->fields.bgGo;
  v6 = (UnityEngine_Object_o *)bgGo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_B2C2F8(p_bgGo, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_418AE4C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AE4C = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_standFigure, 0LL, v8, v9, v10, v11, v12, v13);
  }
}