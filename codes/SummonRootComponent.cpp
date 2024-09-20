void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A57A81 & 1) == 0 )
  {
    sub_1B885B0(&SummonRootComponent_TypeInfo);
    byte_4A57A81 = 1;
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

  if ( (byte_4A57A7C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57A7C = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v4, 0LL);
  }
}


void __fastcall SummonRootComponent__EndLoadAssetData(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p_assetLoadCallback; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *assetLoadCallback; // t1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4A57A7A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57A7A = 1;
  }
  this->fields.summonAssets = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  SummonRootComponent__LoadAssetsToScene(this, v6);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (ServantStatusBattleListViewItem_o *)&this->fields.assetLoadCallback;
  v10 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0LL;
    sub_1B88554(p_assetLoadCallback, 0, v7, v8);
    ActionExtensions__Call(v10, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v13);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonRootComponent__EndLoadBg(
        SummonRootComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  SummonRootComponent_o *v4; // x19
  Il2CppObject *Object_object__48635516; // x20
  Il2CppObject *v6; // x0
  SummonRootComponent_o **p_bgGo; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  SummonRootComponent_o *v10; // x21
  SummonRootComponent_o *v11; // x21
  SummonRootComponent_o *v12; // x20

  v4 = this;
  if ( (byte_4A57A77 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (SummonRootComponent_o *)sub_1B885B0(&StringLiteral_17164/*"bg"*/);
    byte_4A57A77 = 1;
  }
  if ( !data )
    goto LABEL_18;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              (System_String_o *)StringLiteral_17164/*"bg"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         Object_object__48635516,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v6;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.bgGo, (int32_t)v6, v8, v9);
  this = (SummonRootComponent_o *)v4->fields.bgGo;
  if ( !this )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !v4->fields.bgRoot )
    goto LABEL_18;
  v10 = this;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.bgRoot, 0LL);
  if ( !v10 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0LL);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v11 = this;
  if ( !byte_4A55CE1 )
  {
    this = (SummonRootComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v11 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = *p_bgGo;
  if ( !*p_bgGo )
    goto LABEL_18;
  this = (SummonRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v12 = this;
  if ( !byte_4A55CE6 )
  {
    this = (SummonRootComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v12 )
LABEL_18:
    sub_1B8880C(this, data);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)v4, 0LL);
}


void __fastcall SummonRootComponent__GoToSellServant(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A57A80 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    byte_4A57A80 = 1;
  }
  v2 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_38664432(v2, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v2, 0LL);
}


void __fastcall SummonRootComponent__LoadAssetsToScene(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonAssets; // x0
  Il2CppObject *Object_object__48635516; // x20
  Il2CppObject *v5; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  struct SummonControl_o *summonCtr; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_4A57A7B & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13081/*"SummonRoot"*/);
    sub_1B885B0(&StringLiteral_12818/*"SmmonEffPref"*/);
    sub_1B885B0(&StringLiteral_13076/*"SummonEffect2Prefab"*/);
    byte_4A57A7B = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_27;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              (AssetData_o *)summonAssets,
                              (System_String_o *)StringLiteral_13076/*"SummonEffect2Prefab"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__Instantiate_object_(
         Object_object__48635516,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = (struct UnityEngine_GameObject_o *)v5;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.summonEffPrefab, (int32_t)v5, v7, v8);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !this->fields.Effroot )
    goto LABEL_27;
  v9 = (UnityEngine_Transform_o *)summonAssets;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.Effroot, 0LL);
  if ( !v9 )
    goto LABEL_27;
  UnityEngine_Transform__set_parent(v9, (UnityEngine_Transform_o *)summonAssets, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v10 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4A55CE1 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v10 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v11 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_4A55CE6 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v11 )
    goto LABEL_27;
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  summonAssets = this->fields.summonEffPrefab;
  if ( !summonAssets )
    goto LABEL_27;
  summonCtr = this->fields.summonCtr;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  if ( !summonCtr )
    goto LABEL_27;
  summonCtr->fields.summonInstance = (struct UnityEngine_Transform_o *)summonAssets;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&summonCtr->fields.summonInstance, (int32_t)summonAssets, v13, v14);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_12818/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     summonAssets,
                                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13081/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_27:
    sub_1B8880C(summonAssets, method);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, summonAssets, 0LL);
}


void __fastcall SummonRootComponent__SetAssetStroageData(
        SummonRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  AssetLoader_LoadEndDataHandler_o *v10; // x20

  if ( (byte_4A57A79 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SummonRootComponent_EndLoadAssetData__);
    sub_1B885B0(&StringLiteral_5852/*"Effect/Summon"*/);
    byte_4A57A79 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v7);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetLoadCallback, (int32_t)callback, v8, v9);
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5852/*"Effect/Summon"*/, v10, 1, 0LL);
  }
}


void __fastcall SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v7; // x21

  if ( (byte_4A57A76 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SummonRootComponent_EndLoadBg__);
    sub_1B885B0(&StringLiteral_3268/*"Bg/10500"*/);
    byte_4A57A76 = 1;
  }
  v5 = StringLiteral_3268/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_3268/*"Bg/10500"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.path, v5, v2, v3);
  path = this->fields.path;
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v7, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(path, v7, 1, 0LL);
}


void __fastcall SummonRootComponent__SetBgActive(SummonRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0

  bgRoot = this->fields.bgRoot;
  if ( !bgRoot )
    sub_1B8880C(0LL, isDisp);
  UnityEngine_GameObject__SetActive(bgRoot, isDisp, 0LL);
}


void __fastcall SummonRootComponent__beginFinish(SummonRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonCtr; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A57A75 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SummonControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A57A75 = 1;
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
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
  }
  if ( !gameObject
    || (SummonControl__quit((SummonControl_o *)gameObject, 0LL),
        SummonRootComponent__destroyBgInfo(this, v6),
        SummonRootComponent__destroyAssetData(this, v7),
        (gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(gameObject, v4);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  PurchaseBehaviour_c *v5; // x0

  if ( (byte_4A57A73 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57A73 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
  v5 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v5 = PurchaseBehaviour_TypeInfo;
  }
  v5->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateExternal(0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_38666660((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4A57A74 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A57A74 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  SummonRootComponent__SetBg(this, v4);
}


void __fastcall SummonRootComponent__createSvtStandFigure(SummonRootComponent_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_standFigure; // x19
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
  UIStandFigureR_o *RenderPrefab_37976788; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A57A7E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SummonRootComponent_TypeInfo);
    byte_4A57A7E = 1;
  }
  p_standFigure = (ServantStatusBattleListViewItem_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(standFigure, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v7 = (UserServantMaster_o *)Instance;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    if ( !v7 )
LABEL_19:
      sub_1B8880C(Instance, v6);
    HeroineData = UserServantMaster__getHeroineData(v7, SummonRootComponent_TypeInfo->static_fields->FIGURE_ID, 0LL);
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
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
      RenderPrefab_37976788 = StandFigureManager__CreateRenderPrefab_37976788(
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
      RenderPrefab_37976788 = StandFigureManager__CreateRenderPrefab_37977456(
                                svtBase,
                                FIGURE_ID,
                                0,
                                1,
                                0,
                                1,
                                0LL,
                                0,
                                -1,
                                0LL);
    }
    p_standFigure->klass = (ServantStatusBattleListViewItem_c *)RenderPrefab_37976788;
    sub_1B88554(p_standFigure, (int32_t)RenderPrefab_37976788, v17, v18);
  }
}


void __fastcall SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  AssetData_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A57A7D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A57A7D = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    v4 = this->fields.summonAssets;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790656(v4, 0LL);
    this->fields.summonAssets = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.summonAssets, 0, v5, v6);
    SummonRootComponent__ClearAssetsInScene(this, v7);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *path; // x20
  ServantStatusBattleListViewItem_o *p_bgGo; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57A78 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57A78 = 1;
  }
  path = this->fields.path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (ServantStatusBattleListViewItem_o *)&this->fields.bgGo;
  v5 = (UnityEngine_Object_o *)bgGo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_1B88554(p_bgGo, 0, v8, v9);
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
  int32_t v9; // w3

  if ( (byte_4A57A7F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57A7F = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v4 = (UnityEngine_Object_o *)standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_standFigure )
      sub_1B8880C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_standFigure, 0, v8, v9);
  }
}