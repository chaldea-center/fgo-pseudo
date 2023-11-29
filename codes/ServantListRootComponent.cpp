void __fastcall ServantListRootComponent___ctor(ServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndClickBackRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  bool IsStackScene; // w19
  AvalonSceneManager_o *v5; // x0

  if ( (byte_40FC824 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_40FC824 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
        (v5 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  if ( IsStackScene )
    AvalonSceneManager__popScene(v5, 1, 0LL, 0LL);
  else
    AvalonSceneManager__transitionScene(v5, 39, 1, 0LL, 0LL);
}


void __fastcall ServantListRootComponent__EndExitList(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantListRootComponent__EndLoadCommonBg(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FC81E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, v4);
    byte_40FC81E = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameIconAtlas(v11, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FC825 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, isRrquest);
    byte_40FC825 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x21

  if ( (byte_40FC822 & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantListRootComponent_EndExitList__, v6);
    byte_40FC822 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                     CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B170D4();
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v8, 0LL);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v8; // x21

  if ( (byte_40FC820 & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantListRootComponent_SelectServantList__, v6);
    byte_40FC820 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v8 = (CharaGraphListMenu_CallbackFunc_o *)sub_B170CC(CharaGraphListMenu_CallbackFunc_TypeInfo, method, v2, v3, v4);
    CharaGraphListMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      0LL);
    if ( !charaGraphListMenu )
      sub_B170D4();
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v8, 0LL);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x21

  if ( (byte_40FC823 & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ServantListRootComponent_EndClickBackRequest__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC823 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                      CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8,
                                                      v9);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B170D4();
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v10, 0LL);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_B170D4();
  CharaGraphListMenu__Init(charaGraphListMenu, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__SelectServantList(
        ServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  CharaGraphListMenu_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CharaGraphListMenu_RequestCallbackFunc_o *v13; // x0
  bool v14; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  __int64 *v16; // x8

  if ( (byte_40FC821 & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_ServantListRootComponent_EndClickBackRequest__, v5);
    sub_B16FFC(&Method_ServantListRootComponent_EndServantQuestRequest__, v6);
    byte_40FC821 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
         v8 = this->fields.charaGraphListMenu,
         v13 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                             CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                             v9,
                                                             v10,
                                                             v11,
                                                             v12),
         v14 = result == 2,
         v15 = v13,
         v14)
      ? (v16 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v16 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v13, (Il2CppObject *)this, *v16, 0LL),
        !v8) )
  {
    sub_B170D4();
  }
  CharaGraphListMenu__StatusRequest(v8, v15, 0LL);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  AtlasManager_o *Instance; // x0

  if ( (byte_40FC81F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_40FC81F = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu
    || (CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (Instance = (AtlasManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AtlasManager__ReleaseUISkin(Instance, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FC81C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FC81C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v9; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  UnityEngine_Component_o *backSkinSprite; // x0
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20

  if ( (byte_40FC81D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&BgmManager_TypeInfo, v4);
    sub_B16FFC(&Method_ServantListRootComponent_EndLoadCommonBg__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FC81D = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 21, 0LL);
  v9 = this->fields.titleInfo;
  if ( !v9 )
    goto LABEL_19;
  TitleInfoControl__changeTitleInfo_19612684(v9, 1, 21, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL),
        (backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (v14 = UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v14, 0, 0LL);
  v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v19, 2, 1, 0LL);
}