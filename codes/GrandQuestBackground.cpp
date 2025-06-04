void __fastcall GrandQuestBackground___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4AFCE19 & 1) == 0 )
  {
    sub_1BC3008(&GrandQuestBackground_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_13561/*"Terminal/OrdealCall"*/, v2);
    byte_4AFCE19 = 1;
  }
  GrandQuestBackground_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH = (struct System_String_o *)StringLiteral_13561/*"Terminal/OrdealCall"*/;
  sub_1BC2FAC(GrandQuestBackground_TypeInfo->static_fields);
}


void __fastcall GrandQuestBackground___ctor(GrandQuestBackground_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandQuestBackground__BackgroundBlankEarthInit(
        GrandQuestBackground_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x20
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v17; // x1
  Il2CppObject *Instance; // x21
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v21; // x8
  struct ScrTerminalListTop_o *v22; // x8
  struct GrandQuestRootComponent_o *v23; // x8
  struct ScrTerminalListTop_o *v24; // x8
  struct GrandQuestRootComponent_o *v25; // x8
  struct ScrTerminalListTop_o *v26; // x8
  System_Action_o *v27; // x22
  UnityEngine_Object_o *blankEarth; // x22
  GrandQuestBackground_c *v29; // x0
  System_String_o *BLANK_EARTH_ASSET_PATH; // x21
  AssetLoader_LoadEndDataHandler_o *v31; // x22
  struct UnityEngine_GameObject_o **p_bgEffect; // x20
  UnityEngine_Object_o *bgEffect; // x21
  struct GrandQuestRootComponent_o *v34; // x8
  UnityEngine_GameObject_o *BgEffectPrefab; // x0
  UnityEngine_Transform_o *effectRoot; // x19
  Il2CppObject *v37; // x21

  if ( (byte_4AFCE17 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&AssetManager_TypeInfo, v5);
    sub_1BC3008(&GrandQuestBackground_TypeInfo, v6);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    sub_1BC3008(&Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__0__, v12);
    sub_1BC3008(&Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__1__, v13);
    sub_1BC3008(&GrandQuestBackground___c__DisplayClass15_0_TypeInfo, v14);
    byte_4AFCE17 = 1;
  }
  v15 = sub_1BC3254(GrandQuestBackground___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_41;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BC2FAC(v15 + 16);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1BC2FAC(v15 + 24);
  MainMenuBar__FrameIn(0, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC524 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v17);
    byte_4AFC524 = 1;
  }
  WarEntityByWarID = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    WarEntityByWarID = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_41;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(
                       (QuestTree_o *)Instance,
                       *(_DWORD *)(*(_QWORD *)&WarEntityByWarID[1].fields.parentWarId + 4LL),
                       0LL);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_41;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_41;
  v17 = WarEntityByWarID;
  WarEntityByWarID = (WarEntity_o *)mTerminalListTop->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__SetActiveEventInfo((TitleInfoControl_o *)WarEntityByWarID, v17, 16, 0LL, 0LL);
  v21 = this->fields.rootComponent;
  if ( !v21 )
    goto LABEL_41;
  v22 = v21->fields.mTerminalListTop;
  if ( !v22 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v22->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)TitleInfoControl__FrameIn((TitleInfoControl_o *)WarEntityByWarID, 0, 0LL);
  v23 = this->fields.rootComponent;
  if ( !v23 )
    goto LABEL_41;
  v24 = v23->fields.mTerminalListTop;
  if ( !v24 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v24->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__SetGrandQuestHeader((TitleInfoControl_o *)WarEntityByWarID, 0LL);
  v25 = this->fields.rootComponent;
  if ( !v25 )
    goto LABEL_41;
  v26 = v25->fields.mTerminalListTop;
  if ( !v26 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v26->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)WarEntityByWarID, 0, 0, 1, 97, 0LL);
  v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v15,
    Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__0__,
    0LL);
  *(_QWORD *)(v15 + 32) = v27;
  sub_1BC2FAC(v15 + 32);
  blankEarth = (UnityEngine_Object_o *)this->fields.blankEarth;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(blankEarth, 0LL, 0LL) )
  {
    v29 = GrandQuestBackground_TypeInfo;
    if ( !GrandQuestBackground_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestBackground_TypeInfo);
      v29 = GrandQuestBackground_TypeInfo;
    }
    BLANK_EARTH_ASSET_PATH = v29->static_fields->BLANK_EARTH_ASSET_PATH;
    v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v31,
      (Il2CppObject *)v15,
      Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(BLANK_EARTH_ASSET_PATH, v31, 1, 0LL);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 32), 0LL);
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  WarEntityByWarID = (WarEntity_o *)UnityEngine_Object__op_Equality(bgEffect, 0LL, 0LL);
  if ( ((unsigned __int8)WarEntityByWarID & 1) != 0 )
  {
    v34 = this->fields.rootComponent;
    if ( v34 )
    {
      WarEntityByWarID = (WarEntity_o *)v34->fields.resourceCatalog;
      if ( WarEntityByWarID )
      {
        BgEffectPrefab = GrandQuestResourceCatalogAssetBundle__GetBgEffectPrefab(
                           (GrandQuestResourceCatalogAssetBundle_o *)WarEntityByWarID,
                           (const MethodInfo *)v17);
        effectRoot = this->fields.effectRoot;
        v37 = (Il2CppObject *)BgEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        *p_bgEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50900816(
                                                           v37,
                                                           effectRoot,
                                                           (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
        sub_1BC2FAC(p_bgEffect);
        return;
      }
    }
LABEL_41:
    sub_1BC3264(WarEntityByWarID, v17);
  }
}


void __fastcall GrandQuestBackground__DeleteBlankEarthObj(GrandQuestBackground_o *this, const MethodInfo *method)
{
  struct BlankEarth_o **p_blankEarth; // x20
  UnityEngine_Object_o *blankEarth; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  struct UnityEngine_GameObject_o **p_bgEffect; // x20
  UnityEngine_Object_o *bgEffect; // x21
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *rootComponent; // x20
  struct GrandQuestRootComponent_o *v12; // x8
  UnityEngine_Object_o *mTerminalScene; // x20
  struct GrandQuestRootComponent_o *v14; // x8

  if ( (byte_4AFCE18 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFCE18 = 1;
  }
  p_blankEarth = &this->fields.blankEarth;
  blankEarth = (UnityEngine_Object_o *)this->fields.blankEarth;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blankEarth, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)*p_blankEarth;
    if ( !*p_blankEarth )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
    *p_blankEarth = 0LL;
    sub_1BC2FAC(&this->fields.blankEarth);
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgEffect, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)*p_bgEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v10, 0LL);
    *p_bgEffect = 0LL;
    sub_1BC2FAC(&this->fields.bgEffect);
  }
  rootComponent = (UnityEngine_Object_o *)this->fields.rootComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rootComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v12 = this->fields.rootComponent;
    if ( !v12 )
      goto LABEL_27;
    mTerminalScene = (UnityEngine_Object_o *)v12->fields.mTerminalScene;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mTerminalScene, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v14 = this->fields.rootComponent;
      if ( v14 )
      {
        v6 = (UnityEngine_Component_o *)v14->fields.mTerminalScene;
        if ( v6 )
        {
          TerminalSceneComponent__InitLighting((TerminalSceneComponent_o *)v6, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BC3264(v6, v5);
    }
  }
}


void __fastcall GrandQuestBackground__Init(
        GrandQuestBackground_o *this,
        GrandQuestRootComponent_o *rootcomp,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_bgEffect; // x22
  UnityEngine_Object_o *bgEffect; // x23
  UnityEngine_Object_o *v9; // x23

  if ( (byte_4AFCE16 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, rootcomp);
    byte_4AFCE16 = 1;
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgEffect, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)*p_bgEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(v9, 0LL);
    *p_bgEffect = 0LL;
    sub_1BC2FAC(&this->fields.bgEffect);
  }
  this->fields.rootComponent = rootcomp;
  sub_1BC2FAC(&this->fields.rootComponent);
  ActionExtensions__Call(callback, 0LL);
}


// attributes: thunk
void __fastcall GrandQuestBackground__StartUp(
        GrandQuestBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestBackground__BackgroundBlankEarthInit(this, callback, method);
}


ScrTerminalListTop_o *__fastcall GrandQuestBackground__get_TerminalList(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *__fastcall GrandQuestBackground__get_TerminalScene(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *__fastcall GrandQuestBackground__get_grandQuestRoot(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *__fastcall GrandQuestBackground__get_resourceCatalog(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1BC3264(this, method);
  return rootComponent->fields.resourceCatalog;
}


void __fastcall GrandQuestBackground___c__DisplayClass15_0___ctor(
        GrandQuestBackground___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestBackground___c__DisplayClass15_0___BackgroundBlankEarthInit_b__0(
        GrandQuestBackground___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestBackground_o *_4__this; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  GrandQuestBackground___c__DisplayClass15_0_o *v5; // x19
  struct GrandQuestBackground_o *v6; // x8
  struct GrandQuestRootComponent_o *v7; // x8
  struct GrandQuestBackground_o *v8; // x8
  struct GrandQuestBackground_o *v9; // x8
  struct GrandQuestRootComponent_o *v10; // x8
  struct ScrTerminalListTop_o *v11; // x8
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  rootComponent = _4__this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_16;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_16;
  v5 = this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)mTerminalListTop->fields.mActionBgColl;
  if ( !this )
    goto LABEL_16;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v12, 0LL);
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  v7 = v6->fields.rootComponent;
  if ( !v7 )
    goto LABEL_16;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)v7->fields.mTerminalScene;
  if ( !this )
    goto LABEL_16;
  TerminalSceneComponent__SetDirectionalLightActive((TerminalSceneComponent_o *)this, 0, 0LL);
  v8 = v5->fields.__4__this;
  if ( !v8
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v8->fields.blankEarth) == 0LL
    || (BlankEarth__SetState((BlankEarth_o *)this, 7, 0LL), (v9 = v5->fields.__4__this) == 0LL)
    || (v10 = v9->fields.rootComponent) == 0LL
    || (v11 = v10->fields.mTerminalListTop) == 0LL
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v11->fields.mTitleInfo) == 0LL )
  {
LABEL_16:
    sub_1BC3264(this, method);
  }
  TitleInfoControl__setBackBtn_Terminal((TitleInfoControl_o *)this, 1, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  ActionExtensions__Call(v5->fields.callback, 0LL);
}


void __fastcall GrandQuestBackground___c__DisplayClass15_0___BackgroundBlankEarthInit_b__1(
        GrandQuestBackground___c__DisplayClass15_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  GrandQuestBackground___c__DisplayClass15_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Object_object__50213776; // x20
  GrandQuestBackground___c__DisplayClass15_0_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestBackground_o *_4__this; // x21
  struct GrandQuestBackground_o *v15; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct BlankEarth_o *blankEarth; // x20
  struct GrandQuestBackground_o *v18; // x8
  struct GrandQuestRootComponent_o *v19; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x9
  struct GrandQuestBackground_o *v21; // x8
  struct GrandQuestRootComponent_o *v22; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *v23; // x9

  v4 = this;
  if ( (byte_4AFCE1A & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, data);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BlankEarth___, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_20120/*"img_bg_grand"*/, v8);
    sub_1BC3008(&StringLiteral_20124/*"img_bg_grandquest"*/, v9);
    this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_1BC3008(&StringLiteral_7076/*"GrandEarth"*/, v10);
    byte_4AFCE1A = 1;
  }
  if ( !data )
    goto LABEL_22;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              data,
                              (System_String_o *)StringLiteral_7076/*"GrandEarth"*/,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           Object_object__50213776,
                                                           (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v4->fields.__4__this )
    goto LABEL_22;
  v12 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.__4__this, 0LL);
  GameObjectExtensions__SafeSetParent_35217712((UnityEngine_GameObject_o *)v12, gameObject, 0LL);
  if ( !v12 )
    goto LABEL_22;
  _4__this = v4->fields.__4__this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v12,
                                                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.blankEarth = (struct BlankEarth_o *)this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_1BC2FAC(&_4__this->fields.blankEarth);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_22;
  rootComponent = v15->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_22;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)rootComponent->fields.mTerminalListTop;
  if ( !this )
    goto LABEL_22;
  blankEarth = v15->fields.blankEarth;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)ScrTerminalListTop__GetOrdealCallFolderInfo(
                                                           (ScrTerminalListTop_o *)this,
                                                           0LL);
  if ( !blankEarth )
    goto LABEL_22;
  blankEarth->fields.ordealCallFolderInfo = (struct ScrTerminalListTop_CaldeaFolderInfo_o *)this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_1BC2FAC(&blankEarth->fields.ordealCallFolderInfo);
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_22;
  v19 = v18->fields.rootComponent;
  if ( !v19
    || (resourceCatalog = v19->fields.resourceCatalog) == 0LL
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)resourceCatalog->fields.boardUiAtlasManagerUnit) == 0LL
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)AtlasManagerUnit__SetUI(
                                                                 (AtlasManagerUnit_o *)this,
                                                                 v19->fields.blankEarthBg,
                                                                 (System_String_o *)StringLiteral_20120/*"img_bg_grand"*/,
                                                                 0LL),
        (v21 = v4->fields.__4__this) == 0LL)
    || (v22 = v21->fields.rootComponent) == 0LL
    || (v23 = v22->fields.resourceCatalog) == 0LL
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v23->fields.boardUiAtlasManagerUnit) == 0LL )
  {
LABEL_22:
    sub_1BC3264(this, data);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)this,
    v22->fields.blankEarthImageTextBg,
    (System_String_o *)StringLiteral_20124/*"img_bg_grandquest"*/,
    0LL);
  ActionExtensions__Call(v4->fields.onBlankEarthStoodBy, 0LL);
}