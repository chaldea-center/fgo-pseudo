void GrandQuestBackground___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596B228 & 1) == 0 )
  {
    sub_2213A60(&GrandQuestBackground_TypeInfo);
    sub_2213A60(&StringLiteral_14261/*"Terminal/OrdealCall"*/);
    byte_596B228 = 1;
  }
  v7 = StringLiteral_14261/*"Terminal/OrdealCall"*/;
  GrandQuestBackground_TypeInfo->static_fields->BLANK_EARTH_ASSET_PATH = (struct System_String_o *)StringLiteral_14261/*"Terminal/OrdealCall"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GrandQuestBackground_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  Il2CppObject *Instance; // x21
  struct GrandQuestRootComponent_o *rootComponent; // x8
  struct ScrTerminalListTop_o *mTerminalListTop; // x8
  struct GrandQuestRootComponent_o *v24; // x8
  struct ScrTerminalListTop_o *v25; // x8
  struct GrandQuestRootComponent_o *v26; // x8
  struct ScrTerminalListTop_o *v27; // x8
  struct GrandQuestRootComponent_o *v28; // x8
  struct ScrTerminalListTop_o *v29; // x8
  System_Action_o *v30; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *blankEarth; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  GrandQuestBackground_c *v42; // x0
  System_String_o *BLANK_EARTH_ASSET_PATH; // x21
  AssetLoader_LoadEndDataHandler_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  MissionNaviTransitionBoardItem_o *p_bgEffect; // x20
  UnityEngine_Object_o *bgEffect; // x21
  struct GrandQuestRootComponent_o *v51; // x8
  UnityEngine_GameObject_o *BgEffectPrefab; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_Transform_o *effectRoot; // x19
  Il2CppObject *v56; // x21
  Il2CppObject *v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_596B226 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&GrandQuestBackground_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__0__);
    sub_2213A60(&Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__1__);
    sub_2213A60(&GrandQuestBackground___c__DisplayClass15_0_TypeInfo);
    byte_596B226 = 1;
  }
  v5 = sub_2213CCC(GrandQuestBackground___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  MainMenuBar__FrameIn(0, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v20);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  WarEntityByWarID = (WarEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v20);
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
  v24 = this->fields.rootComponent;
  if ( !v24 )
    goto LABEL_41;
  v25 = v24->fields.mTerminalListTop;
  if ( !v25 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v25->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)TitleInfoControl__FrameIn((TitleInfoControl_o *)WarEntityByWarID, 0, 0);
  v26 = this->fields.rootComponent;
  if ( !v26 )
    goto LABEL_41;
  v27 = v26->fields.mTerminalListTop;
  if ( !v27 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v27->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__SetGrandQuestHeader((TitleInfoControl_o *)WarEntityByWarID, 0);
  v28 = this->fields.rootComponent;
  if ( !v28 )
    goto LABEL_41;
  v29 = v28->fields.mTerminalListTop;
  if ( !v29 )
    goto LABEL_41;
  WarEntityByWarID = (WarEntity_o *)v29->fields.mTitleInfo;
  if ( !WarEntityByWarID )
    goto LABEL_41;
  TitleInfoControl__setTitleImgFromBanner((TitleInfoControl_o *)WarEntityByWarID, 0, 0, 1, 98, 0);
  v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__0__,
    0);
  *(_QWORD *)(v5 + 32) = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v30, v31, v32, v33, v34, v35, v36);
  blankEarth = (UnityEngine_Object_o *)this->fields.blankEarth;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
  if ( UnityEngine_Object__op_Equality(blankEarth, 0, 0) )
  {
    v42 = GrandQuestBackground_TypeInfo;
    if ( !*(&GrandQuestBackground_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestBackground_TypeInfo, v40, v41);
      v42 = GrandQuestBackground_TypeInfo;
    }
    BLANK_EARTH_ASSET_PATH = v42->static_fields->BLANK_EARTH_ASSET_PATH;
    v44 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v44,
      (Il2CppObject *)v5,
      Method_GrandQuestBackground___c__DisplayClass15_0__BackgroundBlankEarthInit_b__1__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v45, v46);
    AssetManager__loadAssetStorage(BLANK_EARTH_ASSET_PATH, v44, 1, 0, 0);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 32), 0);
  }
  p_bgEffect = (MissionNaviTransitionBoardItem_o *)&this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
  WarEntityByWarID = (WarEntity_o *)UnityEngine_Object__op_Equality(bgEffect, 0, 0);
  if ( ((unsigned __int8)WarEntityByWarID & 1) != 0 )
  {
    v51 = this->fields.rootComponent;
    if ( v51 )
    {
      WarEntityByWarID = (WarEntity_o *)v51->fields.resourceCatalog;
      if ( WarEntityByWarID )
      {
        BgEffectPrefab = GrandQuestResourceCatalogAssetBundle__GetBgEffectPrefab(
                           (GrandQuestResourceCatalogAssetBundle_o *)WarEntityByWarID,
                           (const MethodInfo *)v7);
        effectRoot = this->fields.effectRoot;
        v56 = (Il2CppObject *)BgEffectPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
        v57 = UnityEngine_Object__Instantiate_object__59717116(
                v56,
                effectRoot,
                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        p_bgEffect->klass = (MissionNaviTransitionBoardItem_c *)v57;
        sub_2213A04(p_bgEffect, (int32_t)v57, v58, v59, v60, v61, v62, v63);
        return;
      }
    }
LABEL_41:
    sub_2213CDC(WarEntityByWarID, v7);
  }
}


void GrandQuestBackground__DeleteBlankEarthObj(GrandQuestBackground_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct BlankEarth_o **p_blankEarth; // x20
  UnityEngine_Object_o *blankEarth; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UnityEngine_GameObject_o **p_bgEffect; // x20
  UnityEngine_Object_o *bgEffect; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Object_o *rootComponent; // x20
  __int64 v30; // x2
  struct GrandQuestRootComponent_o *v31; // x8
  UnityEngine_Object_o *mTerminalScene; // x20
  struct GrandQuestRootComponent_o *v33; // x8

  if ( (byte_596B227 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B227 = 1;
  }
  p_blankEarth = &this->fields.blankEarth;
  blankEarth = (UnityEngine_Object_o *)this->fields.blankEarth;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(blankEarth, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)*p_blankEarth;
    if ( !*p_blankEarth )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_blankEarth = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.blankEarth, 0, v12, v13, v14, v15, v16, v17);
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(bgEffect, 0, 0) )
  {
    v22 = (UnityEngine_Object_o *)*p_bgEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    UnityEngine_Object__Destroy_83459800(v22, 0);
    *p_bgEffect = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgEffect, 0, v23, v24, v25, v26, v27, v28);
  }
  rootComponent = (UnityEngine_Object_o *)this->fields.rootComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  v8 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(rootComponent, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v31 = this->fields.rootComponent;
    if ( !v31 )
      goto LABEL_27;
    mTerminalScene = (UnityEngine_Object_o *)v31->fields.mTerminalScene;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v30);
    v8 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mTerminalScene, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v33 = this->fields.rootComponent;
      if ( v33 )
      {
        v8 = (UnityEngine_Component_o *)v33->fields.mTerminalScene;
        if ( v8 )
        {
          TerminalSceneComponent__InitLighting((TerminalSceneComponent_o *)v8, 0);
          return;
        }
      }
LABEL_27:
      sub_2213CDC(v8, v6);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Object_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596B225 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B225 = 1;
  }
  p_bgEffect = &this->fields.bgEffect;
  bgEffect = (UnityEngine_Object_o *)this->fields.bgEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, rootcomp, callback);
  if ( UnityEngine_Object__op_Inequality(bgEffect, 0, 0) )
  {
    v16 = (UnityEngine_Object_o *)*p_bgEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(v16, 0);
    *p_bgEffect = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgEffect, 0, v17, v18, v19, v20, v21, v22);
  }
  this->fields.rootComponent = rootcomp;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
    (int32_t)rootcomp,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
    sub_2213CDC(this, method);
  return rootComponent->fields.mTerminalListTop;
}


TerminalSceneComponent_o *GrandQuestBackground__get_TerminalScene(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_2213CDC(this, method);
  return rootComponent->fields.mTerminalScene;
}


UnityEngine_GameObject_o *GrandQuestBackground__get_grandQuestRoot(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_2213CDC(this, method);
  return rootComponent->fields.grandQuestRoot;
}


GrandQuestResourceCatalogAssetBundle_o *GrandQuestBackground__get_resourceCatalog(
        GrandQuestBackground_o *this,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  if ( !rootComponent )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Object_object__58532980; // x21
  GrandQuestBackground___c__DisplayClass15_0_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestBackground_o *_4__this; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct GrandQuestBackground_o *v17; // x8
  struct GrandQuestBackground_o *v18; // x8
  struct GrandQuestRootComponent_o *rootComponent; // x9
  struct BlankEarth_o *blankEarth; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct GrandQuestBackground_o *v27; // x8
  struct GrandQuestRootComponent_o *v28; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *resourceCatalog; // x9
  struct GrandQuestBackground_o *v30; // x8
  struct GrandQuestRootComponent_o *v31; // x8
  struct GrandQuestResourceCatalogAssetBundle_o *v32; // x9

  v4 = this;
  if ( (byte_596B229 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21300/*"img_bg_grand"*/);
    sub_2213A60(&StringLiteral_21304/*"img_bg_grandquest"*/);
    this = (GrandQuestBackground___c__DisplayClass15_0_o *)sub_2213A60(&StringLiteral_7445/*"GrandEarth"*/);
    byte_596B229 = 1;
  }
  if ( !data )
    goto LABEL_24;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              (System_String_o *)StringLiteral_7445/*"GrandEarth"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_Object__Instantiate_object_(
                                                           Object_object__58532980,
                                                           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v4->fields.__4__this )
    goto LABEL_24;
  v8 = this;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.__4__this, 0);
  GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v8, gameObject, 0);
  if ( !v8 )
    goto LABEL_24;
  _4__this = v4->fields.__4__this;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)v8,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BlankEarth___);
  if ( !_4__this )
    goto LABEL_24;
  _4__this->fields.blankEarth = (struct BlankEarth_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.blankEarth,
    (int32_t)this,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_24;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)v17->fields.blankEarth;
  if ( !this )
    goto LABEL_24;
  BlankEarth__Setup((BlankEarth_o *)this, data, 0, 0);
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_24;
  rootComponent = v18->fields.rootComponent;
  if ( !rootComponent )
    goto LABEL_24;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)rootComponent->fields.mTerminalListTop;
  if ( !this )
    goto LABEL_24;
  blankEarth = v18->fields.blankEarth;
  this = (GrandQuestBackground___c__DisplayClass15_0_o *)ScrTerminalListTop__GetOrdealCallFolderInfo(
                                                           (ScrTerminalListTop_o *)this,
                                                           0);
  if ( !blankEarth )
    goto LABEL_24;
  blankEarth->fields.ordealCallFolderInfo = (struct ScrTerminalListTop_CaldeaFolderInfo_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&blankEarth->fields.ordealCallFolderInfo,
    (int32_t)this,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = v4->fields.__4__this;
  if ( !v27 )
    goto LABEL_24;
  v28 = v27->fields.rootComponent;
  if ( !v28
    || (resourceCatalog = v28->fields.resourceCatalog) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)resourceCatalog->fields.boardUiAtlasManagerUnit) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)AtlasManagerUnit__SetUI(
                                                                 (AtlasManagerUnit_o *)this,
                                                                 v28->fields.blankEarthBg,
                                                                 (System_String_o *)StringLiteral_21300/*"img_bg_grand"*/,
                                                                 0),
        (v30 = v4->fields.__4__this) == 0)
    || (v31 = v30->fields.rootComponent) == 0
    || (v32 = v31->fields.resourceCatalog) == 0
    || (this = (GrandQuestBackground___c__DisplayClass15_0_o *)v32->fields.boardUiAtlasManagerUnit) == 0 )
  {
LABEL_24:
    sub_2213CDC(this, data);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)this,
    v31->fields.blankEarthImageTextBg,
    (System_String_o *)StringLiteral_21304/*"img_bg_grandquest"*/,
    0);
  ActionExtensions__Call(v4->fields.onBlankEarthStoodBy, 0);
}