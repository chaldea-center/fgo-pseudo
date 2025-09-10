void GrandQuestBackground___cctor(const MethodInfo *method)
{
  if ( (byte_4C21FDA & 1) == 0 )
  {
    sub_1C2D490(&GrandQuestBackground_TypeInfo);
    sub_1C2D490(&StringLiteral_13687/*"Terminal/OrdealCall"*/);
    byte_4C21FDA = 1;
  }
  GrandQuestBackground_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH = (struct System_String_o *)StringLiteral_13687/*"Terminal/OrdealCall"*/;
  sub_1C2D434(GrandQuestBackground_TypeInfo->static_fields);
}


void GrandQuestBackground___ctor(GrandQuestBackground_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestBackground__BackgroundBlankEarthInit(
        GrandQuestBackground_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v7; // x1
  Il2CppObject *Instance; // x21
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v11; // x8
  struct ScrTerminalListTop_o *v12; // x8
  struct GrandQuestRootComponent_o *v13; // x8
  struct ScrTerminalListTop_o *v14; // x8
  struct GrandQuestRootComponent_o *v15; // x8
  struct ScrTerminalListTop_o *v16; // x8
  System_Action_o *v17; // x22
  UnityEngine_Object_o *blankEarth; // x22
  GrandQuestBackground_c *v19; // x0
  System_String_o *BLANK_EARTH_ASSET_PATH; // x21
  AssetLoader_LoadEndDataHandler_o *v21; // x22
  struct UnityEngine_GameObject_o **p_bgEffect; // x20
  UnityEngine_Object_o *bgEffect; // x21
  struct GrandQuestRootComponent_o *v24; // x8
  UnityEngine_GameObject_o *BgEffectPrefab; // x0
  UnityEngine_Transform_o *effectRoot; // x19
  Il2CppObject *v27; // x21

  if ( (byte_4C21FD8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&GrandQuestBackground_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__0__);
    sub_1C2D490(&Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__1__);
    sub_1C2D490(&GrandQuestBackground___c__DisplayClass15_0_TypeInfo);
    byte_4C21FD8 = 1;
  }
  v5 = sub_1C2D6DC(GrandQuestBackground___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434(v5 + 16);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434(v5 + 24);
  MainMenuBar__FrameIn(0, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
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
                       0);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_41;
  mTerminalListTop = rootComponent->fields.mTerminalListTop;
  if ( !mTerminalListTop )
    goto LABEL_41;
  v7 = WarEntityByWarID;
  WarEntityByWarID = (WarEntity_o *)mTerminalListTop->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__SetActiveEventInfo((TitleInfoControl_o *)WarEntityByWarID, v7, 16, 0, 0);
  v11 = this->fields.rootComponent;
  if ( !v11 )
    goto LABEL_41;
  v12 = v11->fields.mTerminalListTop;
  if ( !v12 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v12->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)TitleInfoControl__FrameIn((TitleInfoControl_o *)WarEntityByWarID, 0, 0);
  v13 = this->fields.rootComponent;
  if ( !v13 )
    goto LABEL_41;
  v14 = v13->fields.mTerminalListTop;
  if ( !v14 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v14->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__SetGrandQuestHeader((TitleInfoControl_o *)WarEntityByWarID, 0);
  v15 = this->fields.rootComponent;
  if ( !v15 )
    goto LABEL_41;
  v16 = v15->fields.mTerminalListTop;
  if ( !v16 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v16->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)WarEntityByWarID, 0, 0, 1, 97, 0);
  v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v17;
  sub_1C2D434(v5 + 32);
  blankEarth = (UnityEngine_Object_o *)this->fields.blankEarth;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(blankEarth, 0, 0) )
  {
    v19 = GrandQuestBackground_TypeInfo;
    if ( !GrandQuestBackground_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestBackground_TypeInfo);
      v19 = GrandQuestBackground_TypeInfo;
    }
    BLANK_EARTH_ASSET_PATH = v19->static_fields->BLANK_EARTH_ASSET_PATH;
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)v5,
      Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(BLANK_EARTH_ASSET_PATH, v21, 1, 0);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 32), 0);
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  WarEntityByWarID = (WarEntity_o *)UnityEngine_Object__op_Equality(bgEffect, 0, 0);
  if ( ((unsigned __int8)WarEntityByWarID & 1) != 0 )
  {
    v24 = this->fields.rootComponent;
    if ( v24 )
    {
      WarEntityByWarID = (WarEntity_o *)v24->fields.resourceCatalog;
      if ( WarEntityByWarID )
      {
        BgEffectPrefab = GrandQuestResourceCatalogAssetBundle__GetBgEffectPrefab(
                           (GrandQuestResourceCatalogAssetBundle_o *)WarEntityByWarID,
                           (const MethodInfo *)v7);
        effectRoot = this->fields.effectRoot;
        v27 = (Il2CppObject *)BgEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        *p_bgEffect = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51752420(
                                                           v27,
                                                           effectRoot,
                                                           (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
        sub_1C2D434(p_bgEffect);
        return;
      }
    }
LABEL_41:
    sub_1C2D6EC(WarEntityByWarID, v7);
  }
}


void GrandQuestBackground__DeleteBlankEarthObj(GrandQuestBackground_o *this, const MethodInfo *method)
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

  if ( (byte_4C21FD9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21FD9 = 1;
  }
  p_blankEarth = &this->fields.blankEarth;
  blankEarth = (UnityEngine_Object_o *)this->fields.blankEarth;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blankEarth, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_blankEarth;
    if ( !*p_blankEarth )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_blankEarth = 0;
    sub_1C2D434(&this->fields.blankEarth);
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgEffect, 0, 0) )
  {
    v10 = (UnityEngine_Object_o *)*p_bgEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v10, 0);
    *p_bgEffect = 0;
    sub_1C2D434(&this->fields.bgEffect);
  }
  rootComponent = (UnityEngine_Object_o *)this->fields.rootComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rootComponent, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v12 = this->fields.rootComponent;
    if ( !v12 )
      goto LABEL_27;
    mTerminalScene = (UnityEngine_Object_o *)v12->fields.mTerminalScene;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mTerminalScene, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v14 = this->fields.rootComponent;
      if ( v14 )
      {
        v6 = (UnityEngine_Component_o *)v14->fields.mTerminalScene;
        if ( v6 )
        {
          TerminalSceneComponent__InitLighting((TerminalSceneComponent_o *)v6, 0);
          return;
        }
      }
LABEL_27:
      sub_1C2D6EC(v6, v5);
    }
  }
}


void GrandQuestBackground__Init(
        GrandQuestBackground_o *this,
        GrandQuestRootComponent_o *rootcomp,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_bgEffect; // x22
  UnityEngine_Object_o *bgEffect; // x23
  UnityEngine_Object_o *v9; // x23

  if ( (byte_4C21FD7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21FD7 = 1;
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgEffect, 0, 0) )
  {
    v9 = (UnityEngine_Object_o *)*p_bgEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v9, 0);
    *p_bgEffect = 0;
    sub_1C2D434(&this->fields.bgEffect);
  }
  this->fields.rootComponent = rootcomp;
  sub_1C2D434(&this->fields.rootComponent);
  ActionExtensions__Call(callback, 0);
}


// attributes: thunk
void GrandQuestBackground__StartUp(GrandQuestBackground_o *this, System_Action_o *callback, const MethodInfo *method)
{
  GrandQuestBackground__BackgroundBlankEarthInit(this, callback, method);
}


ScrTerminalListTop_o *GrandQuestBackground__get_TerminalList(GrandQuestBackground_o *this, const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C2D6EC(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *GrandQuestBackground__get_TerminalScene(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C2D6EC(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *GrandQuestBackground__get_grandQuestRoot(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C2D6EC(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *GrandQuestBackground__get_resourceCatalog(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_1C2D6EC(this, method);
  return rootComponent->fields.resourceCatalog;
}


void GrandQuestBackground___c__DisplayClass15_0___ctor(
        GrandQuestBackground___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestBackground___c__DisplayClass15_0___BackgroundBlankEarthInit_b__0(
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
                                                           0);
  if ( !this )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v12, 0);
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_16;
  v7 = v6->fields.rootComponent;
  if ( !v7 )
    goto LABEL_16;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)v7->fields.mTerminalScene;
  if ( !this )
    goto LABEL_16;
  TerminalSceneComponent__SetDirectionalLightActive((TerminalSceneComponent_o *)this, 0, 0);
  v8 = v5->fields.__4__this;
  if ( !v8
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v8->fields.blankEarth) == 0
    || (BlankEarth__SetState((BlankEarth_o *)this, 7, 0), (v9 = v5->fields.__4__this) == 0)
    || (v10 = v9->fields.rootComponent) == 0
    || (v11 = v10->fields.mTerminalListTop) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v11->fields.mTitleInfo) == 0 )
  {
LABEL_16:
    sub_1C2D6EC(this, method);
  }
  TitleInfoControl__setBackBtn_Terminal((TitleInfoControl_o *)this, 1, 0);
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  ActionExtensions__Call(v5->fields.callback, 0);
}


void GrandQuestBackground___c__DisplayClass15_0___BackgroundBlankEarthInit_b__1(
        GrandQuestBackground___c__DisplayClass15_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  GrandQuestBackground___c__DisplayClass15_0_o *v4; // x19
  Il2CppObject *Object_object__51051712; // x20
  GrandQuestBackground___c__DisplayClass15_0_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestBackground_o *_4__this; // x21
  struct GrandQuestBackground_o *v9; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct BlankEarth_o *blankEarth; // x20
  struct GrandQuestBackground_o *v12; // x8
  struct GrandQuestRootComponent_o *v13; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x9
  struct GrandQuestBackground_o *v15; // x8
  struct GrandQuestRootComponent_o *v16; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *v17; // x9

  v4 = this;
  if ( (byte_4C21FDB & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20302/*"img_bg_grand"*/);
    sub_1C2D490(&StringLiteral_20306/*"img_bg_grandquest"*/);
    this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_1C2D490(&StringLiteral_7142/*"GrandEarth"*/);
    byte_4C21FDB = 1;
  }
  if ( !data )
    goto LABEL_22;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              data,
                              (System_String_o *)StringLiteral_7142/*"GrandEarth"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           Object_object__51051712,
                                                           (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v4->fields.__4__this )
    goto LABEL_22;
  v6 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.__4__this, 0);
  GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v6, gameObject, 0);
  if ( !v6 )
    goto LABEL_22;
  _4__this = v4->fields.__4__this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v6,
                                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.blankEarth = (struct BlankEarth_o *)this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_1C2D434(&_4__this->fields.blankEarth);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_22;
  rootComponent = v9->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_22;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)rootComponent->fields.mTerminalListTop;
  if ( !this )
    goto LABEL_22;
  blankEarth = v9->fields.blankEarth;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)ScrTerminalListTop__GetOrdealCallFolderInfo(
                                                           (ScrTerminalListTop_o *)this,
                                                           0);
  if ( !blankEarth )
    goto LABEL_22;
  blankEarth->fields.ordealCallFolderInfo = (struct ScrTerminalListTop_CaldeaFolderInfo_o *)this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_1C2D434(&blankEarth->fields.ordealCallFolderInfo);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_22;
  v13 = v12->fields.rootComponent;
  if ( !v13
    || (resourceCatalog = v13->fields.resourceCatalog) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)resourceCatalog->fields.boardUiAtlasManagerUnit) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)AtlasManagerUnit__SetUI(
                                                                 (AtlasManagerUnit_o *)this,
                                                                 v13->fields.blankEarthBg,
                                                                 (System_String_o *)StringLiteral_20302/*"img_bg_grand"*/,
                                                                 0),
        (v15 = v4->fields.__4__this) == 0)
    || (v16 = v15->fields.rootComponent) == 0
    || (v17 = v16->fields.resourceCatalog) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v17->fields.boardUiAtlasManagerUnit) == 0 )
  {
LABEL_22:
    sub_1C2D6EC(this, data);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)this,
    v16->fields.blankEarthImageTextBg,
    (System_String_o *)StringLiteral_20306/*"img_bg_grandquest"*/,
    0);
  ActionExtensions__Call(v4->fields.onBlankEarthStoodBy, 0);
}