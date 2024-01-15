void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD4CA & 1) == 0 )
  {
    sub_B16FFC(&SummonRootComponent_TypeInfo, v1);
    byte_40FD4CA = 1;
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

  if ( (byte_40FD4C5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD4C5 = 1;
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
    UnityEngine_Object__Destroy_34809464(v4, 0LL);
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

  if ( (byte_40FD4C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_40FD4C3 = 1;
  }
  this->fields.summonAssets = data;
  sub_B16F98(
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
    sub_B16F98(p_assetLoadCallback, 0LL, v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v18, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o **p_bgGo; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0

  if ( (byte_40FD4C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16631/*"bg"*/, v7);
    byte_40FD4C0 = 1;
  }
  if ( !data )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16631/*"bg"*/,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            Object_WarBoardWaitTimeSetting,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.bgGo = v9;
  p_bgGo = &this->fields.bgGo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgGo,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !this->fields.bgGo )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(this->fields.bgGo, 0LL);
  if ( !this->fields.bgRoot )
    goto LABEL_15;
  v18 = transform;
  v19 = UnityEngine_GameObject__get_transform(this->fields.bgRoot, 0LL);
  if ( !v18
    || (UnityEngine_Transform__set_parent(v18, v19, 0LL), !*p_bgGo)
    || (v20 = UnityEngine_GameObject__get_transform(*p_bgGo, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL),
        !v20)
    || (UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL), !*p_bgGo)
    || (v24 = UnityEngine_GameObject__get_transform(*p_bgGo, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_one(0LL),
        !v24) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  SceneJumpInfo_o *v7; // x19
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FD4C9 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_12612/*"SellServant"*/, v6);
    byte_40FD4C9 = 1;
  }
  v7 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, method, v2, v3, v4);
  SceneJumpInfo___ctor_29748028(v7, (System_String_o *)StringLiteral_12612/*"SellServant"*/, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v7, 0LL);
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
  AssetData_o *summonAssets; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v20; // x21
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  UnityEngine_GameObject_o *summonEffPrefab; // x0
  struct SummonControl_o *summonCtr; // x21
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  PlayMakerFSM_o *myFSM; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *Component_srcLineSprite; // x0
  HutongGames_PlayMaker_FsmVariables_o *v43; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v44; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD4C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_13106/*"SummonRoot"*/, v6);
    sub_B16FFC(&StringLiteral_12854/*"SmmonEffPref"*/, v7);
    sub_B16FFC(&StringLiteral_13101/*"SummonEffect2Prefab"*/, v8);
    byte_40FD4C4 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_24;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               summonAssets,
                                                                               (System_String_o *)StringLiteral_13101/*"SummonEffect2Prefab"*/,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             Object_WarBoardWaitTimeSetting,
                                             (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = v11;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.summonEffPrefab,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !this->fields.summonEffPrefab )
    goto LABEL_24;
  transform = UnityEngine_GameObject__get_transform(this->fields.summonEffPrefab, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_24;
  v20 = transform;
  v21 = UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v20 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent(v20, v21, 0LL);
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  v22 = UnityEngine_GameObject__get_transform(*p_summonEffPrefab, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v22 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  v26 = UnityEngine_GameObject__get_transform(*p_summonEffPrefab, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !v26 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  summonEffPrefab = this->fields.summonEffPrefab;
  if ( !summonEffPrefab )
    goto LABEL_24;
  summonCtr = this->fields.summonCtr;
  v32 = (System_Int32_array **)UnityEngine_GameObject__get_transform(summonEffPrefab, 0LL);
  if ( !summonCtr )
    goto LABEL_24;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&summonCtr->fields.summonInstance, v32, v33, v34, v35, v36, v37, v38);
  myFSM = this->fields.myFSM;
  if ( !myFSM
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(myFSM, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          FsmVariables,
                          (System_String_o *)StringLiteral_12854/*"SmmonEffPref"*/,
                          0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, *p_summonEffPrefab, 0LL), !*p_summonEffPrefab)
    || (Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *p_summonEffPrefab,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (v43 = PlayMakerFSM__get_FsmVariables(Component_srcLineSprite, 0LL)) == 0LL
    || (v44 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v43, (System_String_o *)StringLiteral_13106/*"SummonRoot"*/, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !v44) )
  {
LABEL_24:
    sub_B170D4();
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v44, gameObject, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_40FD4C2 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SummonRootComponent_EndLoadAssetData__, v7);
    sub_B16FFC(&StringLiteral_5833/*"Effect/Summon"*/, v8);
    byte_40FD4C2 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.assetLoadCallback,
      (System_Int32_array **)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19, v20);
    AssetLoader_LoadEndDataHandler___ctor(v21, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5833/*"Effect/Summon"*/, v21, 1, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_40FD4BF & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&Method_SummonRootComponent_EndLoadBg__, v10);
    sub_B16FFC(&StringLiteral_2792/*"Bg/10500"*/, v11);
    byte_40FD4BF = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_2792/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_2792/*"Bg/10500"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.path, v12, v2, v3, v4, v5, v6, v7);
  path = this->fields.path;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15, v16, v17);
  AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v18, 1, 0LL);
}


void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *summonCtr; // x20
  SummonControl_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  MissionNotifyManager_o *v11; // x0

  if ( (byte_40FD4BE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SummonControl___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    byte_40FD4BE = 1;
  }
  summonCtr = (UnityEngine_Object_o *)this->fields.summonCtr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonCtr, 0LL, 0LL) )
  {
    Component_srcLineSprite = this->fields.summonCtr;
    if ( !Component_srcLineSprite )
      goto LABEL_16;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    Component_srcLineSprite = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    if ( !Component_srcLineSprite )
      goto LABEL_16;
  }
  SummonControl__quit(Component_srcLineSprite, 0LL);
  SummonRootComponent__destroyBgInfo(this, v9);
  SummonRootComponent__destroyAssetData(this, v10);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v11 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  MissionNotifyManager__EndPause(v11, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FD4BC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FD4BC = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_29752260((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v5; // x1

  if ( (byte_40FD4BD & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD4BD = 1;
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantEntity_o *HeroineData; // x0
  SummonRootComponent_c *v12; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v14; // x21
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t FIGURE_ID; // w22
  int32_t v18; // w0
  System_Int32_array **RenderPrefab_26842372; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FD4C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&SummonRootComponent_TypeInfo, v6);
    byte_40FD4C7 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( (BYTE3(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    }
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_26:
      sub_B170D4();
    HeroineData = UserServantMaster__getHeroineData(
                    MasterData_WarQuestSelectionMaster,
                    SummonRootComponent_TypeInfo->static_fields->FIGURE_ID,
                    0LL);
    v12 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    if ( HeroineData )
    {
      v14 = HeroineData;
      if ( (WORD1(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SummonRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
        v12 = SummonRootComponent_TypeInfo;
      }
      v16 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
      v15 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
      FIGURE_ID = v12->static_fields->FIGURE_ID;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v16;
      *(_QWORD *)&v26.fields.fakeValue = v15;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
      RenderPrefab_26842372 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_26842372(
                                                       svtBase,
                                                       FIGURE_ID,
                                                       v18,
                                                       v14->fields.lv,
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
        v12 = SummonRootComponent_TypeInfo;
      }
      RenderPrefab_26842372 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_26843068(
                                                       svtBase,
                                                       v12->static_fields->FIGURE_ID,
                                                       0,
                                                       1,
                                                       0,
                                                       1,
                                                       0LL,
                                                       0,
                                                       -1,
                                                       0LL);
    }
    p_standFigure->klass = (BattleServantConfConponent_c *)RenderPrefab_26842372;
    sub_B16F98(p_standFigure, RenderPrefab_26842372, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_40FD4C6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FD4C6 = 1;
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
    AssetManager__releaseAsset_29947376(v4, 0LL);
    this->fields.summonAssets = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.summonAssets, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_40FD4C1 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD4C1 = 1;
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
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_B16F98(p_bgGo, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIStandFigureR_o *standFigure; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FD4C8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD4C8 = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_standFigure, 0LL, v7, v8, v9, v10, v11, v12);
  }
}