void __fastcall ServantListRootComponent___ctor(ServantListRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__EndClickBackRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  bool IsStackScene; // w19

  if ( (byte_4353CF2 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4353CF2 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (IsStackScene = AvalonSceneManager__IsStackScene(Instance, 0LL),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  if ( IsStackScene )
    AvalonSceneManager__popScene(Instance, 1, 0LL, 0LL);
  else
    AvalonSceneManager__transitionScene(Instance, 39, 1, 0LL, 0LL);
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
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_4353CEC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_ServantListRootComponent_EndLoadOutGameIconAtlas__);
    byte_4353CEC = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B7076C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadOutGameIconAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameIconAtlas(v4, 0LL);
}


void __fastcall ServantListRootComponent__EndLoadOutGameIconAtlas(
        ServantListRootComponent_o *this,
        const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17527796((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__EndServantQuestRequest(
        ServantListRootComponent_o *this,
        bool isRrquest,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4353CF3 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4353CF3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall ServantListRootComponent__ExitList(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4353CF0 & 1) == 0 )
  {
    sub_B70694(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantListRootComponent_EndExitList__);
    byte_4353CF0 = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v4 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B70764(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndExitList__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B7076C(v5, v6);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v4, 0LL);
}


void __fastcall ServantListRootComponent__Init(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4353CEE & 1) == 0 )
  {
    sub_B70694(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantListRootComponent_SelectServantList__);
    byte_4353CEE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.state = 1;
    charaGraphListMenu = this->fields.charaGraphListMenu;
    v4 = (CharaGraphListMenu_CallbackFunc_o *)sub_B70764(CharaGraphListMenu_CallbackFunc_TypeInfo);
    CharaGraphListMenu_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantListRootComponent_SelectServantList__,
      0LL);
    if ( !charaGraphListMenu )
      sub_B7076C(v5, v6);
    CharaGraphListMenu__Open(charaGraphListMenu, 0, v4, 0LL);
  }
}


void __fastcall ServantListRootComponent__OnClickBack(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x20
  CharaGraphListMenu_RequestCallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4353CF1 & 1) == 0 )
  {
    sub_B70694(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantListRootComponent_EndClickBackRequest__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353CF1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  charaGraphListMenu = this->fields.charaGraphListMenu;
  v4 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B70764(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenu_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantListRootComponent_EndClickBackRequest__,
    0LL);
  if ( !charaGraphListMenu )
    sub_B7076C(v5, v6);
  CharaGraphListMenu__StatusRequest(charaGraphListMenu, v4, 0LL);
}


void __fastcall ServantListRootComponent__Quit(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu )
    sub_B7076C(0LL, method);
  CharaGraphListMenu__Init(charaGraphListMenu, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantListRootComponent__SelectServantList(
        ServantListRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0
  CharaGraphListMenu_o *v6; // x21
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x0
  bool v8; // zf
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  __int64 *v10; // x8

  if ( (byte_4353CEF & 1) == 0 )
  {
    sub_B70694(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantListRootComponent_EndClickBackRequest__);
    sub_B70694(&Method_ServantListRootComponent_EndServantQuestRequest__);
    byte_4353CEF = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  if ( !charaGraphListMenu
    || ((CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
         v6 = this->fields.charaGraphListMenu,
         v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B70764(CharaGraphListMenu_RequestCallbackFunc_TypeInfo),
         v8 = result == 2,
         v9 = v7,
         v8)
      ? (v10 = &Method_ServantListRootComponent_EndServantQuestRequest__)
      : (v10 = &Method_ServantListRootComponent_EndClickBackRequest__),
        CharaGraphListMenu_RequestCallbackFunc___ctor(v7, (Il2CppObject *)this, *v10, 0LL),
        !v6) )
  {
    sub_B7076C(charaGraphListMenu, *(_QWORD *)&result);
  }
  CharaGraphListMenu__StatusRequest(v6, v9, 0LL);
}


void __fastcall ServantListRootComponent__beginFinish(ServantListRootComponent_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *charaGraphListMenu; // x0

  if ( (byte_4353CED & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4353CED = 1;
  }
  charaGraphListMenu = this->fields.charaGraphListMenu;
  this->fields.state = 0;
  if ( !charaGraphListMenu
    || (CharaGraphListMenu__Init(charaGraphListMenu, 0LL),
        (charaGraphListMenu = (CharaGraphListMenu_o *)this->fields.backSkinSprite) == 0LL)
    || (charaGraphListMenu = (CharaGraphListMenu_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)charaGraphListMenu,
                                                       0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)charaGraphListMenu, 0, 0LL),
        (charaGraphListMenu = (CharaGraphListMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(charaGraphListMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)charaGraphListMenu, 2, 0, 0LL);
}


void __fastcall ServantListRootComponent__beginInitialize(ServantListRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4353CEA & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4353CEA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall ServantListRootComponent__beginStartUp(ServantListRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v7; // x20

  if ( (byte_4353CEB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_ServantListRootComponent_EndLoadCommonBg__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353CEB = 1;
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
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__changeTitleInfo_18518488(titleInfo, 1, 21, 0, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 0, 40, 0LL);
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.bgTxtSprite;
  if ( !titleInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL),
        titleInfo = (TitleInfoControl_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)titleInfo & 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL )
  {
LABEL_19:
    sub_B7076C(titleInfo, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantListRootComponent_EndLoadCommonBg__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v7, 2, 1, 0LL);
}