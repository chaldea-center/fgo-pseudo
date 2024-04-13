void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC954 & 1) == 0 )
  {
    sub_B5D5C4(&SummonRootComponent_TypeInfo, v1, v2, v3);
    byte_42EC954 = 1;
  }
  SummonRootComponent_TypeInfo->static_fields->FIGURE_ID = 800100;
}


void __fastcall SummonRootComponent___ctor(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__ClearAssetsInScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *summonEffPrefab; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42EC94F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC94F = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v6, 0LL);
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

  if ( (byte_42EC94D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)data, (_DWORD)method, v3);
    byte_42EC94D = 1;
  }
  this->fields.summonAssets = data;
  sub_B5D560(
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
    sub_B5D560(p_assetLoadCallback, 0LL, v11, v12, v13, v14, v15, v16);
    ActionExtensions__Call(v18, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v21);
  CommonUI__SetLoadMode(Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  System_Int32_array **v16; // x0
  SummonRootComponent_o **p_bgGo; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Transform_o *transform; // x21
  int v26; // s0
  UnityEngine_Transform_o *v29; // x20
  int v30; // s0

  v5 = this;
  if ( (byte_42EC94A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (SummonRootComponent_o *)sub_B5D5C4(&StringLiteral_16901/*"bg"*/, v12, v13, v14);
    byte_42EC94A = 1;
  }
  if ( !data )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16901/*"bg"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 Object_WarBoardWaitTimeSetting,
                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v5->fields.bgGo = (struct UnityEngine_GameObject_o *)v16;
  p_bgGo = (SummonRootComponent_o **)&v5->fields.bgGo;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.bgGo, v16, v18, v19, v20, v21, v22, v23);
  this = (SummonRootComponent_o *)v5->fields.bgGo;
  if ( !this )
    goto LABEL_15;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v5->fields.bgRoot )
    goto LABEL_15;
  v24 = (UnityEngine_Transform_o *)this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v5->fields.bgRoot, 0LL);
  if ( !v24 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)this, 0LL);
  this = *p_bgGo;
  if ( !*p_bgGo
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL), (this = *p_bgGo) == 0LL)
    || (v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL),
        !v29) )
  {
LABEL_15:
    sub_B5D69C(this, data);
  }
  UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v5, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  SceneJumpInfo_o *v10; // x19
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42EC953 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v7, v8, v9);
    byte_42EC953 = 1;
  }
  v10 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_17509080(v10, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  AvalonSceneManager__transitionScene(Instance, 22, 1, (Il2CppObject *)v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *summonAssets; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  struct UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Transform_o *v33; // x21
  UnityEngine_Transform_o *transform; // x21
  int v35; // s0
  UnityEngine_Transform_o *v38; // x21
  int v39; // s0
  struct SummonControl_o *summonCtr; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_42EC94E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_13318/*"SummonRoot"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13066/*"SmmonEffPref"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13313/*"SummonEffect2Prefab"*/, v20, v21, v22);
    byte_42EC94E = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_24;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               (AssetData_o *)summonAssets,
                                                                               (System_String_o *)StringLiteral_13313/*"SummonEffect2Prefab"*/,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v25 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             Object_WarBoardWaitTimeSetting,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = v25;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.summonEffPrefab,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_24;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_24;
  v33 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v33 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent(v33, (UnityEngine_Transform_o *)summonAssets, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  transform = UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_24;
  v38 = UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
  if ( !v38 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_24;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !summonCtr )
    goto LABEL_24;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_B5D560(
    (BattleServantConfConponent_o *)&summonCtr->fields.summonInstance,
    (System_Int32_array **)summonAssets,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_24;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_13066/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     summonAssets,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13318/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_24:
    sub_B5D69C(summonAssets, method);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, summonAssets, 0LL);
}


void __fastcall SummonRootComponent__SetAssetStroageData(
        SummonRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  AssetData_o *summonAssets; // x0
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  AssetLoader_LoadEndDataHandler_o *v27; // x20

  if ( (byte_42EC94C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SummonRootComponent_EndLoadAssetData__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5929/*"Effect/Summon"*/, v15, v16, v17);
    byte_42EC94C = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v20);
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.assetLoadCallback,
      (System_Int32_array **)callback,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v27, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5929/*"Effect/Summon"*/, v27, 1, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v20; // x21

  if ( (byte_42EC949 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SummonRootComponent_EndLoadBg__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2859/*"Bg/10500"*/, v15, v16, v17);
    byte_42EC949 = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_2859/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_2859/*"Bg/10500"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.path, v18, v2, v3, v4, v5, v6, v7);
  path = this->fields.path;
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v20, 1, 0LL);
}


void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_B5D69C(0LL, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_42EC948 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SummonControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11, v12, v13);
    byte_42EC948 = 1;
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
                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    if ( !gameObject )
      goto LABEL_16;
  }
  SummonControl__quit((SummonControl_o *)gameObject, 0LL);
  SummonRootComponent__destroyBgInfo(this, v17);
  SummonRootComponent__destroyAssetData(this, v18);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !gameObject )
LABEL_16:
    sub_B5D69C(gameObject, v15);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EC946 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EC946 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17513312((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *MainBgmName; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42EC947 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC947 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  SummonRootComponent__SetBg(this, v9);
}


void __fastcall SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *p_standFigure; // x19
  UnityEngine_Object_o *standFigure; // x21
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  UserServantMaster_o *v21; // x21
  UserServantEntity_o *HeroineData; // x0
  SummonRootComponent_c *v23; // x8
  UnityEngine_GameObject_o *svtBase; // x20
  UserServantEntity_o *v25; // x21
  __int64 v26; // x23
  __int64 v27; // x24
  int32_t FIGURE_ID; // w22
  int32_t v29; // w0
  System_Int32_array **RenderPrefab_26229268; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42EC951 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SummonRootComponent_TypeInfo, v14, v15, v16);
    byte_42EC951 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    v21 = (UserServantMaster_o *)Instance;
    if ( (BYTE3(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    }
    if ( !v21 )
LABEL_26:
      sub_B5D69C(Instance, v20);
    HeroineData = UserServantMaster__getHeroineData(v21, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0LL);
    v23 = SummonRootComponent_TypeInfo;
    svtBase = this->fields.svtBase;
    if ( HeroineData )
    {
      v25 = HeroineData;
      if ( (WORD1(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SummonRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
        v23 = SummonRootComponent_TypeInfo;
      }
      v27 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
      v26 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
      FIGURE_ID = v23->static_fields->FIGURE_ID;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v27;
      *(_QWORD *)&v37.fields.fakeValue = v26;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
      RenderPrefab_26229268 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_26229268(
                                                       svtBase,
                                                       FIGURE_ID,
                                                       v29,
                                                       v25->fields.lv,
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
        v23 = SummonRootComponent_TypeInfo;
      }
      RenderPrefab_26229268 = (System_Int32_array **)StandFigureManager__CreateRenderPrefab_26229964(
                                                       svtBase,
                                                       v23->static_fields->FIGURE_ID,
                                                       0,
                                                       1,
                                                       0,
                                                       1,
                                                       0LL,
                                                       0,
                                                       -1,
                                                       0LL);
    }
    p_standFigure->klass = (BattleServantConfConponent_c *)RenderPrefab_26229268;
    sub_B5D560(p_standFigure, RenderPrefab_26229268, v31, v32, v33, v34, v35, v36);
  }
}


void __fastcall SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetData_o *summonAssets; // x0
  AssetData_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_42EC950 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC950 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    v6 = this->fields.summonAssets;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_30657564(v6, 0LL);
    this->fields.summonAssets = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.summonAssets, 0LL, v7, v8, v9, v10, v11, v12);
    SummonRootComponent__ClearAssetsInScene(this, v13);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *path; // x20
  BattleServantConfConponent_o *p_bgGo; // x19
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EC94B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC94B = 1;
  }
  path = this->fields.path;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (BattleServantConfConponent_o *)&this->fields.bgGo;
  v10 = (UnityEngine_Object_o *)bgGo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_B5D560(p_bgGo, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


void __fastcall SummonRootComponent__destroySvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_standFigure; // x19
  UnityEngine_Object_o *v6; // x20
  struct UIStandFigureR_o *standFigure; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EC952 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC952 = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v6 = (UnityEngine_Object_o *)standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_standFigure )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_standFigure, 0LL, v10, v11, v12, v13, v14, v15);
  }
}