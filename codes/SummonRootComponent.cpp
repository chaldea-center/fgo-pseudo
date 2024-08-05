void __fastcall SummonRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FAE9F & 1) == 0 )
  {
    sub_1B64870(&SummonRootComponent_TypeInfo, v1);
    byte_49FAE9F = 1;
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

  if ( (byte_49FAE9A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FAE9A = 1;
  }
  summonEffPrefab = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonEffPrefab, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.summonEffPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(v4, 0LL);
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

  if ( (byte_49FAE98 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, data);
    byte_49FAE98 = 1;
  }
  this->fields.summonAssets = data;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.summonAssets, (int32_t)data, (int32_t)method, v3);
  SummonRootComponent__LoadAssetsToScene(this, v6);
  assetLoadCallback = this->fields.assetLoadCallback;
  p_assetLoadCallback = (ServantStatusBattleListViewItem_o *)&this->fields.assetLoadCallback;
  v10 = assetLoadCallback;
  if ( assetLoadCallback )
  {
    p_assetLoadCallback->klass = 0LL;
    sub_1B64814(p_assetLoadCallback, 0, v7, v8);
    ActionExtensions__Call(v10, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v13);
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
  Il2CppObject *Object_object__48356600; // x20
  Il2CppObject *v9; // x0
  SummonRootComponent_o **p_bgGo; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  SummonRootComponent_o *v13; // x21
  SummonRootComponent_o *v14; // x21
  SummonRootComponent_o *v15; // x20

  v4 = this;
  if ( (byte_49FAE95 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, data);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    this = (SummonRootComponent_o *)sub_1B64870(&StringLiteral_17098/*"bg"*/, v7);
    byte_49FAE95 = 1;
  }
  if ( !data )
    goto LABEL_18;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              data,
                              (System_String_o *)StringLiteral_17098/*"bg"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         Object_object__48356600,
         (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v4->fields.bgGo = (struct UnityEngine_GameObject_o *)v9;
  p_bgGo = (SummonRootComponent_o **)&v4->fields.bgGo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.bgGo, (int32_t)v9, v11, v12);
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
  if ( !byte_49F9201 )
  {
    this = (SummonRootComponent_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, data);
    byte_49F9201 = 1;
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
  if ( !byte_49F9206 )
  {
    this = (SummonRootComponent_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, data);
    byte_49F9206 = 1;
  }
  if ( !v15 )
LABEL_18:
    sub_1B64ACC(this, data);
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

  if ( (byte_49FAE9E & 1) == 0 )
  {
    sub_1B64870(&SceneJumpInfo_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_1B64870(&StringLiteral_12528/*"SellServant"*/, v3);
    byte_49FAE9E = 1;
  }
  v4 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_38279108(v4, (System_String_o *)StringLiteral_12528/*"SellServant"*/, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v6);
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
  Il2CppObject *Object_object__48356600; // x20
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o **p_summonEffPrefab; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x21
  struct SummonControl_o *summonCtr; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20

  if ( (byte_49FAE99 & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, method);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v3);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64870(&StringLiteral_13021/*"SummonRoot"*/, v6);
    sub_1B64870(&StringLiteral_12758/*"SmmonEffPref"*/, v7);
    sub_1B64870(&StringLiteral_13016/*"SummonEffect2Prefab"*/, v8);
    byte_49FAE99 = 1;
  }
  summonAssets = (UnityEngine_GameObject_o *)this->fields.summonAssets;
  if ( !summonAssets )
    goto LABEL_27;
  Object_object__48356600 = AssetData__GetObject_object__48356600(
                              (AssetData_o *)summonAssets,
                              (System_String_o *)StringLiteral_13016/*"SummonEffect2Prefab"*/,
                              (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          Object_object__48356600,
          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.summonEffPrefab = (struct UnityEngine_GameObject_o *)v11;
  p_summonEffPrefab = &this->fields.summonEffPrefab;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.summonEffPrefab, (int32_t)v11, v13, v14);
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
  if ( !byte_49F9201 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9201 = 1;
  }
  if ( !v16 )
    goto LABEL_27;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  summonAssets = *p_summonEffPrefab;
  if ( !*p_summonEffPrefab )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonAssets, 0LL);
  v17 = (UnityEngine_Transform_o *)summonAssets;
  if ( !byte_49F9206 )
  {
    summonAssets = (UnityEngine_GameObject_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9206 = 1;
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&summonCtr->fields.summonInstance, (int32_t)summonAssets, v19, v20);
  summonAssets = (UnityEngine_GameObject_o *)this->fields.myFSM;
  if ( !summonAssets )
    goto LABEL_27;
  summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL);
  if ( !summonAssets
    || (summonAssets = (UnityEngine_GameObject_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                     (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                                                     (System_String_o *)StringLiteral_12758/*"SmmonEffPref"*/,
                                                     0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(
          (HutongGames_PlayMaker_FsmGameObject_o *)summonAssets,
          *p_summonEffPrefab,
          0LL),
        (summonAssets = *p_summonEffPrefab) == 0LL)
    || (summonAssets = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     summonAssets,
                                                     (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___)) == 0LL
    || (summonAssets = (UnityEngine_GameObject_o *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)summonAssets, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          (HutongGames_PlayMaker_FsmVariables_o *)summonAssets,
                          (System_String_o *)StringLiteral_13021/*"SummonRoot"*/,
                          0LL),
        summonAssets = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        !FsmGameObject) )
  {
LABEL_27:
    sub_1B64ACC(summonAssets, method);
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
  int32_t v13; // w3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_49FAE97 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, callback);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SummonRootComponent_EndLoadAssetData__, v7);
    sub_1B64870(&StringLiteral_5826/*"Effect/Summon"*/, v8);
    byte_49FAE97 = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B64ACC(0LL, v11);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    this->fields.assetLoadCallback = callback;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.assetLoadCallback, (int32_t)callback, v12, v13);
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_SummonRootComponent_EndLoadAssetData__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5826/*"Effect/Summon"*/, v14, 1, 0LL);
  }
}


void __fastcall SummonRootComponent__SetBg(SummonRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  System_String_o *path; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x21

  if ( (byte_49FAE94 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B64870(&Method_SummonRootComponent_EndLoadBg__, v6);
    sub_1B64870(&StringLiteral_3246/*"Bg/10500"*/, v7);
    byte_49FAE94 = 1;
  }
  v8 = StringLiteral_3246/*"Bg/10500"*/;
  this->fields.path = (struct System_String_o *)StringLiteral_3246/*"Bg/10500"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.path, v8, v2, v3);
  path = this->fields.path;
  v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64ABC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1B64ACC(0LL, isDisp);
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

  if ( (byte_49FAE93 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_SummonControl___, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    byte_49FAE93 = 1;
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
                                               (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_SummonControl___);
  }
  if ( !gameObject
    || (SummonControl__quit((SummonControl_o *)gameObject, 0LL),
        SummonRootComponent__destroyBgInfo(this, v8),
        SummonRootComponent__destroyAssetData(this, v9),
        (gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_12:
    sub_1B64ACC(gameObject, v6);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)gameObject, 0LL);
}


void __fastcall SummonRootComponent__beginInitialize(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  PurchaseBehaviour_c *v6; // x0

  if ( (byte_49FAE91 & 1) == 0 )
  {
    sub_1B64870(&PurchaseBehaviour_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49FAE91 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 4, 30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
  v6 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v6 = PurchaseBehaviour_TypeInfo;
  }
  v6->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateExternal(0LL);
}


void __fastcall SummonRootComponent__beginResume(SummonRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_38281336((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SummonRootComponent__beginStartUp(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v5; // x1

  if ( (byte_49FAE92 & 1) == 0 )
  {
    sub_1B64870(&BgmManager_TypeInfo, method);
    sub_1B64870(&SoundManager_TypeInfo, v3);
    byte_49FAE92 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
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
  ServantStatusBattleListViewItem_o *p_standFigure; // x19
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
  UIStandFigureR_o *RenderPrefab_37666500; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FAE9C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64870(&SummonRootComponent_TypeInfo, v6);
    byte_49FAE9C = 1;
  }
  p_standFigure = (ServantStatusBattleListViewItem_o *)&this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(standFigure, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v11 = (UserServantMaster_o *)Instance;
    if ( !SummonRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonRootComponent_TypeInfo);
    if ( !v11 )
LABEL_19:
      sub_1B64ACC(Instance, v10);
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
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
      RenderPrefab_37666500 = StandFigureManager__CreateRenderPrefab_37666500(
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
      RenderPrefab_37666500 = StandFigureManager__CreateRenderPrefab_37612308(
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
    p_standFigure->klass = (ServantStatusBattleListViewItem_c *)RenderPrefab_37666500;
    sub_1B64814(p_standFigure, (int32_t)RenderPrefab_37666500, v21, v22);
  }
}


void __fastcall SummonRootComponent__destroyAssetData(SummonRootComponent_o *this, const MethodInfo *method)
{
  AssetData_o *summonAssets; // x0
  AssetData_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_49FAE9B & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    byte_49FAE9B = 1;
  }
  summonAssets = this->fields.summonAssets;
  if ( summonAssets && !AssetData__get_IsEmpty(summonAssets, 0LL) )
  {
    v4 = this->fields.summonAssets;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37481844(v4, 0LL);
    this->fields.summonAssets = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.summonAssets, 0, v5, v6);
    SummonRootComponent__ClearAssetsInScene(this, v7);
  }
}


void __fastcall SummonRootComponent__destroyBgInfo(SummonRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *path; // x20
  ServantStatusBattleListViewItem_o *p_bgGo; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *bgGo; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FAE96 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FAE96 = 1;
  }
  path = this->fields.path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(path, 0LL);
  bgGo = this->fields.bgGo;
  p_bgGo = (ServantStatusBattleListViewItem_o *)&this->fields.bgGo;
  v6 = (UnityEngine_Object_o *)bgGo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_bgGo->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(klass, 0LL);
    p_bgGo->klass = 0LL;
    sub_1B64814(p_bgGo, 0, v9, v10);
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

  if ( (byte_49FAE9D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FAE9D = 1;
  }
  standFigure = this->fields.standFigure;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  v4 = (UnityEngine_Object_o *)standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_standFigure )
      sub_1B64ACC(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
    *p_standFigure = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)p_standFigure, 0, v8, v9);
  }
}